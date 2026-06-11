<template>
  <section class="panel-39741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39741");
const base = ref(39741);
const total = computed(() => base.value * 2);

function incrementar39741() {
  base.value++;
}
</script>
