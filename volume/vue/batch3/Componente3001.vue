<template>
  <section class="panel-3001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3001");
const base = ref(3001);
const total = computed(() => base.value * 2);

function incrementar3001() {
  base.value++;
}
</script>
