<template>
  <section class="panel-54573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54573");
const base = ref(54573);
const total = computed(() => base.value * 2);

function incrementar54573() {
  base.value++;
}
</script>
