<template>
  <section class="panel-49725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49725");
const base = ref(49725);
const total = computed(() => base.value * 2);

function incrementar49725() {
  base.value++;
}
</script>
