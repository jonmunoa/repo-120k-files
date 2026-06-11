<template>
  <section class="panel-6313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6313");
const base = ref(6313);
const total = computed(() => base.value * 2);

function incrementar6313() {
  base.value++;
}
</script>
