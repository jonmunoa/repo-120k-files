<template>
  <section class="panel-30265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30265");
const base = ref(30265);
const total = computed(() => base.value * 2);

function incrementar30265() {
  base.value++;
}
</script>
