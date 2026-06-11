<template>
  <section class="panel-9665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9665");
const base = ref(9665);
const total = computed(() => base.value * 2);

function incrementar9665() {
  base.value++;
}
</script>
