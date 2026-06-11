<template>
  <section class="panel-16757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16757");
const base = ref(16757);
const total = computed(() => base.value * 2);

function incrementar16757() {
  base.value++;
}
</script>
