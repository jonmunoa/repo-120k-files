<template>
  <section class="panel-32517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32517");
const base = ref(32517);
const total = computed(() => base.value * 2);

function incrementar32517() {
  base.value++;
}
</script>
