<template>
  <section class="panel-43837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43837");
const base = ref(43837);
const total = computed(() => base.value * 2);

function incrementar43837() {
  base.value++;
}
</script>
