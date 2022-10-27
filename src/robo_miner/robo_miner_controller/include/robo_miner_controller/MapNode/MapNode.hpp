#pragma once
#include <array>
#include <memory>

#include "robo_miner_controller/FieldType/Fieldtype.hpp"
#include "robo_miner_controller/MapNodeFields/MapNodeFields.hpp"
class MapNode: std::enable_shared_from_this<MapNode>{

private:

bool locked = false;
FieldType fieldtype;
int visits = 0;
std::pair<int,int> send_location;
bool mapped = false;
public:
	MapNode(int x,int y,char fieldtype,bool locked = false):fieldtype(getCrystalType(fieldtype)),locked(locked),send_location({x,y}){

	}
	MapNode(char fieldtype,bool locked = false):fieldtype(getCrystalType(fieldtype)),locked(locked){

	}
	void toogleMapped(){
		this->mapped = true;
	}
	void untoogleMapped(){
		this->mapped = false;
	}
	void toogleLocked(){
		this->locked = true;
	}
	void untoogleLocked(){
		this->locked = false;
	}
	bool getMapped(){
		return this->mapped;
	}
	void setLocation(int x,int y){
		this->send_location = {x,y};
	}
	std::pair<int,int> getLocation(){
		return this->send_location;
	}
	~MapNode(){

	}
	/* void printNode(){
		if(this->fields[MapNodeFields::UP] != nullptr){
			std::cout<<"  "<<getLetterBack(this->fields[MapNodeFields::UP]->getCrystal())<<std::endl;
		}else{
			std::cout<<"  "<<"_"<<std::endl;
		}
		if(this->fields[MapNodeFields::LEFT] != nullptr){
			std::cout<<getLetterBack(this->fields[MapNodeFields::LEFT]->getCrystal())<<";";
		}else{
			std::cout<<"_;";
		}
		std::cout<<getLetterBack(this->getCrystal())<<";";
		
		if(this->fields[MapNodeFields::RIGHT] != nullptr){
			std::cout<<getLetterBack(this->fields[MapNodeFields::RIGHT]->getCrystal())<<std::endl;
		}else{
			std::cout<<"_"<<std::endl;
		}
		if(this->fields[MapNodeFields::DOWN] != nullptr){
			std::cout<<"  "<<getLetterBack(this->fields[MapNodeFields::DOWN]->getCrystal())<<std::endl;
		}else{
			std::cout<<"  "<<"_"<<std::endl;
		}
	} */
	FieldType getCrystal(){
		return this->fieldtype;
	} 
	bool getBlock(){
		return this->getCrystal() == FieldType::WALL || this->getCrystal() == FieldType::END;
	}
	bool isVisitedOftern(){
		return this->visits>3;
	}
	bool isLocked(){
		return this->locked;
	}

	/* void setNeghbour(std::shared_ptr<MapNode> node,MapNodeFields position ){
		fields[position] = node;
	} */
	/* std::shared_ptr<MapNode> getNodeIfExists(MapNodeFields position){
		return fields[position];
	} */
	/* void doubleSet(std::shared_ptr<MapNode> THIS,std::shared_ptr<MapNode> node, MapNodeFields pos1,MapNodeFields pos2){
		node->fields[pos2] = THIS;
		THIS->fields[pos1] = node;
	} */
	/* static void doubleSetIfNotSet(std::shared_ptr<MapNode> THIS,std::shared_ptr<MapNode> node, MapNodeFields pos1,MapNodeFields pos2){
		if(THIS->getNodeIfExists(pos1)==nullptr){
			THIS->doubleSet(THIS,node,pos1,pos2);
		}
	} */
	void visit(){
		this->visits++;
		this->locked = true;;
	}
	/* int willBecomeDead(){
		int times = 0;
		for (auto i : this->fields)
		{
			if(i->getCrystal() == FieldType::WALL || i->getCrystal() == FieldType::END){
				times++;
			}
		}
		if(times>1){
			this->locked = true;
		}
		this->visits++;
		return times;
	}
	bool checkPassage(MapNodeFields dirrection){
		return this->getNodeIfExists(dirrection)->getCrystal() == FieldType::END ||
		 	this->getNodeIfExists(dirrection)->getCrystal() == FieldType::WALL||
			this->visits>4;
	} */
};
