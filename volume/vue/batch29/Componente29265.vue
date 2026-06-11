<template>
  <section class="panel-29265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29265");
const base = ref(29265);
const total = computed(() => base.value * 2);

function incrementar29265() {
  base.value++;
}
</script>
