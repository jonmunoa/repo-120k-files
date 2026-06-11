<template>
  <section class="panel-56517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56517");
const base = ref(56517);
const total = computed(() => base.value * 2);

function incrementar56517() {
  base.value++;
}
</script>
