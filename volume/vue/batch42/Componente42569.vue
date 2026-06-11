<template>
  <section class="panel-42569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42569");
const base = ref(42569);
const total = computed(() => base.value * 2);

function incrementar42569() {
  base.value++;
}
</script>
