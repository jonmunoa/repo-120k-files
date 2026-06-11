<template>
  <section class="panel-23741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23741");
const base = ref(23741);
const total = computed(() => base.value * 2);

function incrementar23741() {
  base.value++;
}
</script>
