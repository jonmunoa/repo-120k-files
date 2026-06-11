<template>
  <section class="panel-43065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43065");
const base = ref(43065);
const total = computed(() => base.value * 2);

function incrementar43065() {
  base.value++;
}
</script>
