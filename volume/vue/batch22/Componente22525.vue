<template>
  <section class="panel-22525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22525");
const base = ref(22525);
const total = computed(() => base.value * 2);

function incrementar22525() {
  base.value++;
}
</script>
