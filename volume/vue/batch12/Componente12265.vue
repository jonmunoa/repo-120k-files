<template>
  <section class="panel-12265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12265");
const base = ref(12265);
const total = computed(() => base.value * 2);

function incrementar12265() {
  base.value++;
}
</script>
