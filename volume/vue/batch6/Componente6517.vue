<template>
  <section class="panel-6517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6517");
const base = ref(6517);
const total = computed(() => base.value * 2);

function incrementar6517() {
  base.value++;
}
</script>
