#Life-cycle Methods 

<script>
export default {
  data(){
    return {
      msg : "hello I am pratii !",
    };
  },
  // beforeCreate(){
  //   console.log("before-Create")
  //   console.log("ans-1",this.msg) ///undefind
  // },
  // created(){
  //   console.log("after-Create")
  //   console.log("ans-2",this.msg) //get value bt not html(value)
  // },
  // beforeMount(){
  //   console.log("before-mount")
  //   console.log("ans-3",this.msg) //get val
  // },
  // mounted(){
  //   console.log("mount")
  //   console.log("ans-4",this.msg) //get val
  // },
  beforeUpdate(){
    console.log("before-update")
    console.log("ans-5",this.msg) 
  },
  update(){
    console.log("update")
    console.log("ans-6",this.msg) 
  },
  beforeUnmount(){
    console.log("beforeUnmount")
    console.log("ans-7",this.msg) 
  },
  unmounted(){
    console.log("Unmount")
    console.log("ans-8",this.msg) 
  },
}

</script>
