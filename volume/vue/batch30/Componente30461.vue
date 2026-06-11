<template>
  <section class="panel-30461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30461");
const base = ref(30461);
const total = computed(() => base.value * 2);

function incrementar30461() {
  base.value++;
}
</script>
