<template>
  <section class="panel-3021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3021");
const base = ref(3021);
const total = computed(() => base.value * 2);

function incrementar3021() {
  base.value++;
}
</script>
