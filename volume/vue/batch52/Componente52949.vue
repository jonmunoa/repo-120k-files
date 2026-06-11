<template>
  <section class="panel-52949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52949");
const base = ref(52949);
const total = computed(() => base.value * 2);

function incrementar52949() {
  base.value++;
}
</script>
