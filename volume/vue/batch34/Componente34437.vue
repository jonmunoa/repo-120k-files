<template>
  <section class="panel-34437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34437");
const base = ref(34437);
const total = computed(() => base.value * 2);

function incrementar34437() {
  base.value++;
}
</script>
