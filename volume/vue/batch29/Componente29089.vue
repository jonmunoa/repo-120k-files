<template>
  <section class="panel-29089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29089");
const base = ref(29089);
const total = computed(() => base.value * 2);

function incrementar29089() {
  base.value++;
}
</script>
