<template>
  <section class="panel-32665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32665");
const base = ref(32665);
const total = computed(() => base.value * 2);

function incrementar32665() {
  base.value++;
}
</script>
