<template>
  <section class="panel-16557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16557");
const base = ref(16557);
const total = computed(() => base.value * 2);

function incrementar16557() {
  base.value++;
}
</script>
