<template>
  <section class="panel-42417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42417");
const base = ref(42417);
const total = computed(() => base.value * 2);

function incrementar42417() {
  base.value++;
}
</script>
