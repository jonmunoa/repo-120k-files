<template>
  <section class="panel-45517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45517");
const base = ref(45517);
const total = computed(() => base.value * 2);

function incrementar45517() {
  base.value++;
}
</script>
