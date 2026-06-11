<template>
  <section class="panel-1265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1265");
const base = ref(1265);
const total = computed(() => base.value * 2);

function incrementar1265() {
  base.value++;
}
</script>
