<template>
  <section class="panel-29517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29517");
const base = ref(29517);
const total = computed(() => base.value * 2);

function incrementar29517() {
  base.value++;
}
</script>
