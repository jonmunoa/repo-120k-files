<template>
  <section class="panel-52213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52213");
const base = ref(52213);
const total = computed(() => base.value * 2);

function incrementar52213() {
  base.value++;
}
</script>
