<template>
  <section class="panel-50517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50517");
const base = ref(50517);
const total = computed(() => base.value * 2);

function incrementar50517() {
  base.value++;
}
</script>
