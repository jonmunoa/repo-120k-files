<template>
  <section class="panel-42705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42705");
const base = ref(42705);
const total = computed(() => base.value * 2);

function incrementar42705() {
  base.value++;
}
</script>
