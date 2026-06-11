<template>
  <section class="panel-20109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20109");
const base = ref(20109);
const total = computed(() => base.value * 2);

function incrementar20109() {
  base.value++;
}
</script>
