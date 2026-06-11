<template>
  <section class="panel-3433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3433");
const base = ref(3433);
const total = computed(() => base.value * 2);

function incrementar3433() {
  base.value++;
}
</script>
