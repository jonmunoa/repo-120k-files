<template>
  <section class="panel-2385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2385");
const base = ref(2385);
const total = computed(() => base.value * 2);

function incrementar2385() {
  base.value++;
}
</script>
