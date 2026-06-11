<template>
  <section class="panel-3617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3617");
const base = ref(3617);
const total = computed(() => base.value * 2);

function incrementar3617() {
  base.value++;
}
</script>
