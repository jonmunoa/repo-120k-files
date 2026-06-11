<template>
  <section class="panel-43681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43681");
const base = ref(43681);
const total = computed(() => base.value * 2);

function incrementar43681() {
  base.value++;
}
</script>
