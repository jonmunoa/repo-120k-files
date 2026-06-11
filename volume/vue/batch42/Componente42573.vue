<template>
  <section class="panel-42573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42573");
const base = ref(42573);
const total = computed(() => base.value * 2);

function incrementar42573() {
  base.value++;
}
</script>
