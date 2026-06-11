<template>
  <section class="panel-42461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42461");
const base = ref(42461);
const total = computed(() => base.value * 2);

function incrementar42461() {
  base.value++;
}
</script>
