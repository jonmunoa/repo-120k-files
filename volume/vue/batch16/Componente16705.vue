<template>
  <section class="panel-16705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16705");
const base = ref(16705);
const total = computed(() => base.value * 2);

function incrementar16705() {
  base.value++;
}
</script>
