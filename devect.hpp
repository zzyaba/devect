#pragma once
#include<initializer_list>
namespace __devect_namespace{
	using namespace std;
	template<typename Type>
	struct devect{
		struct iterator{
			devect*fa;
			long long sub;
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
			iterator operator+(long long x)const&{
				return{fa,sub+x};
			}
			iterator&operator++(){
			    ++sub;
				return*this;
			}
			iterator operator++(int){
				return{fa,sub++};
			}
			iterator&operator+=(long long x){
			    sub+=x;
				return*this;
			}
			long long operator-(const iterator&x)const&{
				return sub-x.sub;
			}
			iterator operator-(long long x)const&{
				return{fa,sub-x};
			}
			iterator&operator--(){
			    --sub;
				return*this;
			}
			iterator operator--(int){
				return{fa,sub--};
			}
			iterator&operator-=(long long x){
			    sub-=x;
				return*this;
			}
			Type*operator->()const{
				return fa->dat+sub;
			}
			Type&operator*(long long x)const{
				return fa->dat[sub+x];
			}
			operator Type*(){
				return fa->dat+sub;
			}
		};
		struct const_iterator{
			const devect*fa;
			long long sub;
			const_iterator(){
			}
			const_iterator(const devect*fa,const long long sub):fa(fa),sub(sub){
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
			const_iterator operator+(long long x)const&{
				return{fa,sub+x};
			}
			const_iterator&operator++(){
			    ++sub;
			    return*this;
			}
			const_iterator operator++(int){
				return{fa,sub++};
			}
			const_iterator&operator+=(long long x){
			    sub+=x;
			    return*this;
			}
			long long operator-(const const_iterator&x)const&{
				return sub-x.sub;
			}
			const_iterator operator-(long long x)const&{
				return{fa,sub-x};
			}
			const_iterator&operator--(){
			    --sub;
			    return*this;
			}
			const_iterator operator--(int){
				return{fa,sub--};
			}
			const_iterator&operator-=(long long x){
			    sub-=x;
                return*this;
			}
			const Type*operator->()const{
				return fa->dat+sub;
			}
			const Type&operator*(long long x)const{
				return fa->dat[sub+x];
			}
			operator const Type*(){
				return fa->dat+sub;
			}
		};
		struct reverse_iterator{
			devect*fa;
			long long sub;
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
			reverse_iterator operator+(long long x)const&{
				return{fa,sub-x};
			}
			reverse_iterator&operator++(){
			    --sub;
				return*this;
			}
			reverse_iterator operator++(int){
				return{fa,sub--};
			}
			reverse_iterator&operator+=(long long x){
			    sub-=x;
				return*this;
			}
			long long operator-(const reverse_iterator&x)const&{
				return sub+x.sub;
			}
			reverse_iterator operator-(long long x)const&{
				return{fa,sub+x};
			}
			reverse_iterator&operator--(){
			    ++sub;
				return*this;
			}
			reverse_iterator operator--(int){
				return{fa,sub++};
			}
			reverse_iterator&operator-=(long long x){
			    sub+=x;
				return*this;
			}
			Type*operator->()const{
				return fa->dat+sub;
			}
			Type&operator*(long long x)const{
				return fa->dat[sub-x];
			}
			operator Type*(){
				return fa->dat+sub;
			}
		};
		struct const_reverse_iterator{
			const devect*fa;
			long long sub;
			const_reverse_iterator(){
			}
			const_reverse_iterator(const devect*fa,const long long sub):fa(fa),sub(sub){
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
			const_reverse_iterator operator+(long long x)const&{
				return{fa,sub-x};
			}
			const_reverse_iterator&operator++(){
			    --sub;
			    return*this;
			}
			const_reverse_iterator operator++(int){
				return{fa,sub--};
			}
			const_reverse_iterator&operator+=(long long x){
			    sub-=x;
			    return*this;
			}
			long long operator-(const const_reverse_iterator&x)const&{
				return sub-x.sub;
			}
			const_reverse_iterator operator-(long long x)const&{
				return{fa,sub+x};
			}
			const_reverse_iterator&operator--(){
			    ++sub;
			    return*this;
			}
			const_reverse_iterator operator--(int){
				return{fa,sub++};
			}
			const_reverse_iterator&operator-=(long long x){
			    sub+=x;
			    return*this;
			}
			const Type*operator->()const{
				return fa->dat+sub;
			}
			const Type&operator*(long long x)const{
				return fa->dat[sub-x];
			}
			operator const Type*(){
				return fa->dat+sub;
			}
		};
		long long len,lsiz,rsiz;
		Type*dat,*tmp;
		void assign(long long count){
			delete[]dat;
			lsiz=0;
			rsiz=count-1;
			dat=new Type[len=count];
		}
		void assign(long long count,const Type&value){
			delete[]dat;
			lsiz=0;
			rsiz=count-1;
			dat=new Type[len=count];
			for(Type*i=dat,*iend=dat+count;i!=iend;*(i++)=value);
		}
		void assign(initializer_list<Type>init_list){
			delete[]dat;
			lsiz=0;
			rsiz=init_list.size()-1;
			tmp=dat=new Type[len=init_list.size()];
			for(const Type*i=init_list.begin();i!=init_list.end();*(tmp++)=*(i++));
		}
		Type&at(long long position){
			return dat[lsiz+position];
		}
		const Type&at(long long position)const{
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
		long long capacity_back()const{
			return len-lsiz;
		}
		long long capacity_front()const{
			return rsiz+1;
		}
		long long capacity_full()const{
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
			len=lsiz=0;
			rsiz=-1;
			dat=0;
		}
		const_reverse_iterator crbegin()const{
			return{this,rsiz};
		}
		const_reverse_iterator crend()const{
			return{this,lsiz-1};
		}
		Type*data(){
			return dat+lsiz;
		}
		const Type*data()const{
			return dat+lsiz;
		}
		devect(){
		    len=lsiz=0;
		    dat=0;
		    rsiz=-1;
		}
		devect(long long count){
			lsiz=0;
			rsiz=count-1;
			dat=new Type[len=count];
		}
		devect(long long count,const Type&value){
			lsiz=0;
			rsiz=count-1;
			dat=new Type[len=count];
			for(Type*i=dat,*iend=dat+count;i!=iend;*(i++)=value);
		}
		devect(initializer_list<Type>init_list){
			lsiz=0;
			rsiz=init_list.size()-1;
			dat=new Type[len=init_list.size()];
			tmp=dat;
			for(auto i=init_list.begin();i!=init_list.end();*(tmp++)=*(i++));
		}
		~devect(){
		    delete[]dat;
		}
		template<typename...Types>
		iterator emplace(const_iterator position,Types&&...args){
			if(++rsiz==len){
				memcpy((tmp=new Type[len=len<<1|1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz));
				delete[]dat;
				dat=tmp;
			}
			memmove(dat+position.sub+1,dat+position.sub,sizeof(Type)*(dat+rsiz-position));
			dat[position.sub]=Type(args...);
			return{this,position.sub};
		}
		template<typename...Types>
		void emplace_back(Types&&...args){
			if(++rsiz==len){
				memcpy((tmp=new Type[len=len<<1|1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
				delete[]dat;
				dat=tmp;
			}
			dat[rsiz]=Type(args...);
		}
		template<typename...Types>
		void emplace_front(Types&&...args){
		    if(lsiz--==0){
				memcpy((tmp=new Type[len<<1|1])+len+1,dat,sizeof(Type)*(rsiz+1));
				delete[]dat;
				rsiz+=(lsiz=len)+1;
				len=len<<1|1;
				dat=tmp;
		    }
			dat[lsiz]=Type(args...);
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
			memmove(dat+position.sub,dat+position.sub+1,sizeof(Type)*(dat+(rsiz--)-position));
			return{this,position.sub};
		}
		iterator erase(const_iterator first,const_iterator last){
			memmove(dat+first.sub,dat+last.sub,sizeof(Type)*(dat+(rsiz-=last-first)-first+1));
			return{this,first.sub};
		}
		Type&front(){
			return dat[lsiz];
		}
		const Type&front()const{
			return dat[lsiz];
		}
		iterator insert(const_iterator position,const Type&value){
			if(++rsiz==len){
				memcpy((tmp=new Type[len<<1|1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz));
				delete[]dat;
				dat=tmp;
			}
			memmove(dat+position.sub+1,dat+position.sub,sizeof(Type)*(dat+rsiz-position));
			dat[position.sub]=value;
			return{this,position.sub};
		}
		iterator insert(const_iterator position,Type&&value){
			if(++rsiz==len){
				memcpy((tmp=new Type[len<<1|1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz));
				delete[]dat;
				dat=tmp;
			}
			memmove(dat+position.sub+1,dat+position.sub,sizeof(Type)*(dat+rsiz-position));
			dat[position.sub]=value;
			return{this,position.sub};
		}
		void insert(const_iterator position,long long count,const Type&value){
			if((rsiz+=count)>=len){
                memcpy((tmp=new Type[len=rsiz<<1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz));
				delete[]dat;
				dat=tmp;
			}
			memmove(dat+position.sub+count,dat+position.sub,sizeof(Type)*(dat+rsiz-position-count+1));
			for(long long i=0;i<count;i++){
                dat[position.sub+i]=value;
			}
		}
		long long max_size(){
		    return LONG_LONG_MAX;
		}
		Type&operator[](long long position){
		    return dat[lsiz+position];
		}
		const Type&operator[](long long position)const{
		    return dat[lsiz+position];
		}
		devect&operator=(const devect&right){
		    delete[]dat;
		    lsiz=0;
		    rsiz=right.rsiz-right.lsiz;
		    dat=new Type[len=rsiz+1];
		    memcpy(dat,right.dat+right.lsiz,sizeof(Type)*len);
		    return*this;
		}
		devect&operator=(devect&&right){
		    delete[]dat;
		    lsiz=0;
		    rsiz=right.rsiz-right.lsiz;
		    dat=new Type[len=rsiz+1];
		    memcpy(dat,right.dat+right.lsiz,sizeof(Type)*len);
		    return*this;
		}
		void pop_back(){
		    rsiz--;
		}
		Type pop_back_element(){
            return dat[rsiz--];
		}
		void pop_front(){
		    lsiz++;
		}
		Type pop_front_element(){
		    return dat[lsiz++];
		}
		void push_back(const Type&value){
			if(++rsiz==len){
				memcpy((tmp=new Type[len=len<<1|1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
				delete[]dat;
				dat=tmp;
			}
			dat[rsiz]=value;
		}
		void push_back(Type&&value){
			if(++rsiz==len){
				memcpy((tmp=new Type[len=len<<1|1])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
				delete[]dat;
				dat=tmp;
			}
			dat[rsiz]=value;
		}
		void push_front(const Type&value){
		    if(lsiz--==0){
				memcpy((tmp=new Type[len<<1|1])+len+1,dat,sizeof(Type)*(rsiz+1));
				delete[]dat;
				rsiz+=(lsiz=len)+1;
				len=len<<1|1;
				dat=tmp;
		    }
			dat[lsiz]=value;
		}
		void push_front(Type&&value){
		    if(lsiz--==0){
				memcpy((tmp=new Type[len<<1|1])+len+1,dat,sizeof(Type)*(rsiz+1));
				delete[]dat;
				rsiz+=(lsiz=len)+1;
				len=len<<1|1;
				dat=tmp;
		    }
			dat[lsiz]=value;
		}
		reverse_iterator rbegin(){
		    return{this,rsiz};
		}
		const_reverse_iterator rbegin()const{
		    return{this,rsiz};
		}
		reverse_iterator rend(){
		    return{this,lsiz-1};
		}
		const_reverse_iterator rend()const{
		    return{this,lsiz-1};
		}
		void reserve_back(long long count){
            memcpy((tmp=new Type[len=lsiz+count])+lsiz,dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
            delete[]dat;
            dat=tmp;
		}
		void reserve_front(long long count){
            memcpy((tmp=new Type[len+count-rsiz-1])+lsiz+count-rsiz-1,dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
            delete[]dat;
            lsiz+=count-rsiz-1;
            len+=count-rsiz-1;
            rsiz=count-1;
            dat=tmp;
		}
		void resize_back(long long new_size){
		    memcpy(tmp=new Type[len=new_size],dat+lsiz,sizeof(Type)*min(new_size,rsiz-lsiz+1));
            delete[]dat;
            dat=tmp;
            lsiz=0;
            rsiz=new_size-1;
		}
		void resize_front(long long new_size){
		    memcpy((tmp=new Type[len=new_size])+new_size-min(new_size,rsiz-lsiz+1),dat+rsiz+1-min(new_size,rsiz-lsiz+1),sizeof(Type)*min(new_size,rsiz-lsiz+1));
            delete[]dat;
            dat=tmp;
            lsiz=0;
            rsiz=new_size-1;
		}
		void resize(long long new_size,Type value){
		    delete[]dat;
		    lsiz=0;
		    rsiz=new_size-1;
		    dat=new Type[len=new_size];
		    for(long long i=0;i<len;i++){
                dat[i]=value;
		    }
		}
		void shrink_to_fit(){
		    memcpy(tmp=new Type[len=rsiz-lsiz+1],dat+lsiz,sizeof(Type)*(rsiz-lsiz+1));
            delete[]dat;
            dat=tmp;
            lsiz=0;
            rsiz=len-1;
		}
		long long size()const{
		    return rsiz-lsiz+1;
		}
		void swap(devect&right){
		    lsiz^=right.lsiz^=lsiz^=right.lsiz;
		    rsiz^=right.rsiz^=rsiz^=right.rsiz;
		    len^=right.len^=len^=right.len;
		    tmp=dat;
		    dat=right.dat;
		    right.dat=tmp;
		}
	};
}
using __devect_namespace::devect;
