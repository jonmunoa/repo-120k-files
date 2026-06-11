<template>
  <section class="panel-44565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44565");
const base = ref(44565);
const total = computed(() => base.value * 2);

function incrementar44565() {
  base.value++;
}
</script>
