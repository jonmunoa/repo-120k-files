<template>
  <section class="panel-3761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3761");
const base = ref(3761);
const total = computed(() => base.value * 2);

function incrementar3761() {
  base.value++;
}
</script>
