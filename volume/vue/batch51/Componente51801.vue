<template>
  <section class="panel-51801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51801");
const base = ref(51801);
const total = computed(() => base.value * 2);

function incrementar51801() {
  base.value++;
}
</script>
