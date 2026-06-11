<template>
  <section class="panel-43593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43593");
const base = ref(43593);
const total = computed(() => base.value * 2);

function incrementar43593() {
  base.value++;
}
</script>
