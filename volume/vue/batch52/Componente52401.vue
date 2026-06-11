<template>
  <section class="panel-52401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52401");
const base = ref(52401);
const total = computed(() => base.value * 2);

function incrementar52401() {
  base.value++;
}
</script>
