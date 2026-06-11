<template>
  <section class="panel-22741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22741");
const base = ref(22741);
const total = computed(() => base.value * 2);

function incrementar22741() {
  base.value++;
}
</script>
