<template>
  <section class="panel-42853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42853");
const base = ref(42853);
const total = computed(() => base.value * 2);

function incrementar42853() {
  base.value++;
}
</script>
