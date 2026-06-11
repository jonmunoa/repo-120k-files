<template>
  <section class="panel-20265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20265");
const base = ref(20265);
const total = computed(() => base.value * 2);

function incrementar20265() {
  base.value++;
}
</script>
