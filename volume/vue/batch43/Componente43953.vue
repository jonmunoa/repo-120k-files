<template>
  <section class="panel-43953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43953");
const base = ref(43953);
const total = computed(() => base.value * 2);

function incrementar43953() {
  base.value++;
}
</script>
