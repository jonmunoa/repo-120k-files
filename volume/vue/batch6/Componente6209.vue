<template>
  <section class="panel-6209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6209");
const base = ref(6209);
const total = computed(() => base.value * 2);

function incrementar6209() {
  base.value++;
}
</script>
