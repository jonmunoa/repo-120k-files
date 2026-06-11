<template>
  <section class="panel-4517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4517");
const base = ref(4517);
const total = computed(() => base.value * 2);

function incrementar4517() {
  base.value++;
}
</script>
