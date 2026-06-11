<template>
  <section class="panel-6873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6873");
const base = ref(6873);
const total = computed(() => base.value * 2);

function incrementar6873() {
  base.value++;
}
</script>
