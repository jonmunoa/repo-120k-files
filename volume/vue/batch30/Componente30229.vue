<template>
  <section class="panel-30229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30229");
const base = ref(30229);
const total = computed(() => base.value * 2);

function incrementar30229() {
  base.value++;
}
</script>
