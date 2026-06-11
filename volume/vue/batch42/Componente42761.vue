<template>
  <section class="panel-42761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42761");
const base = ref(42761);
const total = computed(() => base.value * 2);

function incrementar42761() {
  base.value++;
}
</script>
