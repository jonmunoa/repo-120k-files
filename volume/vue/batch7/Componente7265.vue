<template>
  <section class="panel-7265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7265");
const base = ref(7265);
const total = computed(() => base.value * 2);

function incrementar7265() {
  base.value++;
}
</script>
