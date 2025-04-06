#pragma once
#include<initializer_list>
namespace __devect_namespace{
	using namespace std;
	int a;
	void*tmp;
	template<typename Type>
	struct devect{
		struct iterator{
			devect*fa;
			int sub;
			bool operator!=(const iterator&x)const&{
				return fa!=x.fa||sub!=x.sub;
			}
			bool operator==(const iterator&x)const&{
				return fa==x.fa&&sub==x.sub;
			}
			bool operator<(const iterator&x)const&{
				return sub<x.sub;
			}
			bool operator<=(const iterator&x)const&{
				return sub<=x.sub;
			}
			bool operator>(const iterator&x)const&{
				return sub>x.sub;
			}
			bool operator>=(const iterator&x)const&{
				return sub>=x.sub;
			}
			Type&operator*()const{
				return fa->dat[sub];
			}
			iterator operator+(int x)const&{
				return{fa,sub+x};
			}
			iterator&operator++(){
				return{fa,++sub};
			}
			iterator operator++(int){
				return{fa,sub++};
			}
			iterator&operator+=(int x){
				return{fa,sub+=x};
			}
			int operator-(const iterator&x)const&{
				return sub-x.sub;
			}
			iterator operator-(int x)const&{
				return{fa,sub-x};
			}
			iterator&operator--(){
				return{fa,--sub};
			}
			iterator operator--(int){
				return{fa,sub--};
			}
			iterator&operator-=(int x){
				return{fa,sub-=x};
			}
			Type*operator->()const{
				return fa->dat+sub;
			}
			Type&operator*(int x)const{
				return fa->dat[sub+x];
			}
			operator Type*(){
				return fa->dat+sub;
			}
		};
		struct const_iterator{
			devect*fa;
			int sub;
			const_iterator(){
			}
			const_iterator(const iterator x){
				fa=x.fa;
				sub=x.sub;
			}
			bool operator!=(const const_iterator&x)const&{
				return fa!=x.fa||sub!=x.sub;
			}
			bool operator==(const const_iterator&x)const&{
				return fa==x.fa&&sub==x.sub;
			}
			bool operator<(const const_iterator&x)const&{
				return sub<x.sub;
			}
			bool operator<=(const const_iterator&x)const&{
				return sub<=x.sub;
			}
			bool operator>(const const_iterator&x)const&{
				return sub>x.sub;
			}
			bool operator>=(const const_iterator&x)const&{
				return sub>=x.sub;
			}
			const Type&operator*()const{
				return fa->dat[sub];
			}
			const_iterator operator+(int x)const&{
				return{fa,sub+x};
			}
			const_iterator&operator++(){
				return{fa,++sub};
			}
			const_iterator operator++(int){
				return{fa,sub++};
			}
			const_iterator&operator+=(int x){
				return{fa,sub+=x};
			}
			int operator-(const const_iterator&x)const&{
				return sub-x.sub;
			}
			const_iterator operator-(int x)const&{
				return{fa,sub-x};
			}
			const_iterator&operator--(){
				return{fa,--sub};
			}
			const_iterator operator--(int){
				return{fa,sub--};
			}
			const_iterator&operator-=(int x){
				return{fa,sub-=x};
			}
			const Type*operator->()const{
				return fa->dat+sub;
			}
			const Type&operator*(int x)const{
				return fa->dat[sub+x];
			}
			operator const Type*(){
				return fa->dat+sub;
			}
		};
		struct reverse_iterator{
			devect*fa;
			int sub;
			bool operator!=(const reverse_iterator&x)const&{
				return fa!=x.fa||sub!=x.sub;
			}
			bool operator==(const reverse_iterator&x)const&{
				return fa==x.fa&&sub==x.sub;
			}
			bool operator<(const reverse_iterator&x)const&{
				return sub>x.sub;
			}
			bool operator<=(const reverse_iterator&x)const&{
				return sub>=x.sub;
			}
			bool operator>(const reverse_iterator&x)const&{
				return sub<x.sub;
			}
			bool operator>=(const reverse_iterator&x)const&{
				return sub<=x.sub;
			}
			Type&operator*()const{
				return fa->dat[sub];
			}
			iterator operator+(int x)const&{
				return{fa,sub-x};
			}
			iterator&operator++(){
				return{fa,--sub};
			}
			iterator operator++(int){
				return{fa,sub--};
			}
			iterator&operator+=(int x){
				return{fa,sub-=x};
			}
			int operator-(const reverse_iterator&x)const&{
				return sub+x.sub;
			}
			iterator operator-(int x)const&{
				return{fa,sub+x};
			}
			iterator&operator--(){
				return{fa,++sub};
			}
			iterator operator--(int){
				return{fa,sub++};
			}
			iterator&operator-=(int x){
				return{fa,sub+=x};
			}
			Type*operator->()const{
				return fa->dat+sub;
			}
			Type&operator*(int x)const{
				return fa->dat[sub-x];
			}
			operator Type*(){
				return fa->dat+sub;
			}
		};
		struct const_reverse_iterator{
			devect*fa;
			int sub;
			const_reverse_iterator(){
			}
			const_reverse_iterator(const reverse_iterator x){
				fa=x.fa;
				sub=x.sub;
			}
			bool operator!=(const const_reverse_iterator&x)const&{
				return fa!=x.fa||sub!=x.sub;
			}
			bool operator==(const const_reverse_iterator&x)const&{
				return fa==x.fa&&sub==x.sub;
			}
			bool operator<(const const_reverse_iterator&x)const&{
				return sub>x.sub;
			}
			bool operator<=(const const_reverse_iterator&x)const&{
				return sub>=x.sub;
			}
			bool operator>(const const_reverse_iterator&x)const&{
				return sub<x.sub;
			}
			bool operator>=(const const_reverse_iterator&x)const&{
				return sub<=x.sub;
			}
			const Type&operator*()const{
				return fa->dat[sub];
			}
			const_reverse_iterator operator+(int x)const&{
				return{fa,sub-x};
			}
			const_reverse_iterator&operator++(){
				return{fa,--sub};
			}
			const_reverse_iterator operator++(int){
				return{fa,sub--};
			}
			const_reverse_iterator&operator+=(int x){
				return{fa,sub-=x};
			}
			int operator-(const const_reverse_iterator&x)const&{
				return sub-x.sub;
			}
			const_reverse_iterator operator-(int x)const&{
				return{fa,sub+x};
			}
			const_reverse_iterator&operator--(){
				return{fa,++sub};
			}
			const_reverse_iterator operator--(int){
				return{fa,sub++};
			}
			const_reverse_iterator&operator-=(int x){
				return{fa,sub+=x};
			}
			const Type*operator->()const{
				return fa->dat+sub;
			}
			const Type&operator*(int x)const{
				return fa->dat[sub-x];
			}
			operator const Type*(){
				return fa->dat+sub;
			}
		};
		int len,lsiz,rsiz;
		Type*dat;
		void assign(int count,const Type&value){
			delete[]dat;
			lsiz=0;
			rsiz=count-1;
			dat=new Type[len=count];
			for(Type*i=dat,iend=dat+count;i!=iend;*(i++)=value);
		}
		void assign(initializer_list<Type>init_list){
			delete[]dat;
			lsiz=0;
			rsiz=init_list.size()-1;
			dat=new Type[len=init_list.size()];
			for(Type*i=dat,iend=dat+init_list.size(),j=init_list.begin();i!=iend;*(i++)=*(j++));
		}
		Type&at(int position){
			return dat[lsiz+position];
		}
		const Type&at(int position)const{
			return dat[lsiz+position];
		}
		Type&back(){
			return dat[rsiz];
		}
		const Type&back()const{
			return dat[rsiz];
		}
		iterator begin(){
			return{this,lsiz};
		}
		const_iterator begin()const{
			return{this,lsiz};
		}
		int capacity()const{
			return len;
		}
		const_iterator cbegin()const{
			return{this,lsiz};
		}
		const_iterator cend()const{
			return{this,rsiz+1};
		}
		void clear(){
			delete[]dat;
			lsiz=0;
			rsiz=-1;
			dat=new Type[len=1];
		}
		const_reverse_iterator crbegin()const{
			return{this,rsiz};
		}
		const_reverse_iterator crend()const{
			return{this,lsiz-1};
		}
		Type*data(){
			return dat;
		}
		const Type*data()const{
			return dat;
		}
		template<typename...Types>
		iterator emplace(const_iterator position,Types&&...args){
			if(++rsiz==len){
				memcpy(((Type*)(tmp=new Type[len<<=1]))+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz));
				delete[]dat;
				data=(Type*)tmp;
			}
			memmove(position+1,position,sizeof(Type)*(dat+rsiz-position));
			dat[position.sub]=Type(args...);
			return{this,position.sub};
		}
		template<typename...Types>
		void emplace_back(Types&&...args){
			if(++rsiz==len){
				memcpy(((Type*)(tmp=new Type[len<<=1]))+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
				delete[]dat;
				dat=(Type*)tmp;
			}
			data[rsiz]=Type(args...);
		}
		bool empty()const{
			return rsiz<lsiz;
		}
		iterator end(){
			return{this,rsiz+1};
		}
		const_iterator end()const{
			return{this,rsiz+1};
		}
		iterator erase(const_iterator position){
			memmove(position,position+1,sizeof(Type)*(dat+(rsiz--)-position));
			return{this,position.sub};
		}
		iterator erase(const_iterator first,const_iterator last){
			memmove(first,last,sizeof(Type)*(dat+(rsiz-=last-first)-first+1));
			return{this,first.sub};
		}
		Type&front(){
			return dat[lsiz];
		}
		const Type&front()const{
			return dat[lsiz];
		}
	};
}
using __devect_namespace::devect;

