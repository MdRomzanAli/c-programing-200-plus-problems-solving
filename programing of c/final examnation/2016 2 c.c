void main(){
    int i;
    float s=1,c=1,d;
    for(i=1;;i++){
      c=c*i;
      d=(1.0/c);
      if(d>=0.001){
       s=s+d;
      }
      else{
        break;
      }
    }
    printf("Value of e: %.4f",s);
}
