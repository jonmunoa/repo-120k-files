<template>
  <section class="panel-19517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19517");
const base = ref(19517);
const total = computed(() => base.value * 2);

function incrementar19517() {
  base.value++;
}
</script>
