<template>
  <section class="panel-15433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15433");
const base = ref(15433);
const total = computed(() => base.value * 2);

function incrementar15433() {
  base.value++;
}
</script>
