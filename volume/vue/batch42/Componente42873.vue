<template>
  <section class="panel-42873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42873");
const base = ref(42873);
const total = computed(() => base.value * 2);

function incrementar42873() {
  base.value++;
}
</script>
