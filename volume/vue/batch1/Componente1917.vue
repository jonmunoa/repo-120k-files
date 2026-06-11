<template>
  <section class="panel-1917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1917");
const base = ref(1917);
const total = computed(() => base.value * 2);

function incrementar1917() {
  base.value++;
}
</script>
