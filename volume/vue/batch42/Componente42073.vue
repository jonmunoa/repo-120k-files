<template>
  <section class="panel-42073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42073");
const base = ref(42073);
const total = computed(() => base.value * 2);

function incrementar42073() {
  base.value++;
}
</script>
