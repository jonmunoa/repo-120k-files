<template>
  <section class="panel-3705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3705");
const base = ref(3705);
const total = computed(() => base.value * 2);

function incrementar3705() {
  base.value++;
}
</script>
