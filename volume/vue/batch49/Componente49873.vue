<template>
  <section class="panel-49873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49873");
const base = ref(49873);
const total = computed(() => base.value * 2);

function incrementar49873() {
  base.value++;
}
</script>
