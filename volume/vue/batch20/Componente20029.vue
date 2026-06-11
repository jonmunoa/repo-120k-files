<template>
  <section class="panel-20029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20029");
const base = ref(20029);
const total = computed(() => base.value * 2);

function incrementar20029() {
  base.value++;
}
</script>
