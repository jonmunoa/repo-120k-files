<template>
  <section class="panel-8265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8265");
const base = ref(8265);
const total = computed(() => base.value * 2);

function incrementar8265() {
  base.value++;
}
</script>
