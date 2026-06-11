<template>
  <section class="panel-22517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22517");
const base = ref(22517);
const total = computed(() => base.value * 2);

function incrementar22517() {
  base.value++;
}
</script>
