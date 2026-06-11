<template>
  <section class="panel-6265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6265");
const base = ref(6265);
const total = computed(() => base.value * 2);

function incrementar6265() {
  base.value++;
}
</script>
