<template>
  <section class="panel-54077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54077");
const base = ref(54077);
const total = computed(() => base.value * 2);

function incrementar54077() {
  base.value++;
}
</script>
