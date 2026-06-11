<template>
  <section class="panel-42385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42385");
const base = ref(42385);
const total = computed(() => base.value * 2);

function incrementar42385() {
  base.value++;
}
</script>
