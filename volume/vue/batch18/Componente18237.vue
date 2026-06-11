<template>
  <section class="panel-18237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18237");
const base = ref(18237);
const total = computed(() => base.value * 2);

function incrementar18237() {
  base.value++;
}
</script>
