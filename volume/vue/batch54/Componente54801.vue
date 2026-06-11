<template>
  <section class="panel-54801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54801");
const base = ref(54801);
const total = computed(() => base.value * 2);

function incrementar54801() {
  base.value++;
}
</script>
