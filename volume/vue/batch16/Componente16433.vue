<template>
  <section class="panel-16433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16433");
const base = ref(16433);
const total = computed(() => base.value * 2);

function incrementar16433() {
  base.value++;
}
</script>
