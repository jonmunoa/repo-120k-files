<template>
  <section class="panel-44265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44265");
const base = ref(44265);
const total = computed(() => base.value * 2);

function incrementar44265() {
  base.value++;
}
</script>
