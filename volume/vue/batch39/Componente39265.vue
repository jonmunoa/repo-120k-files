<template>
  <section class="panel-39265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39265");
const base = ref(39265);
const total = computed(() => base.value * 2);

function incrementar39265() {
  base.value++;
}
</script>
