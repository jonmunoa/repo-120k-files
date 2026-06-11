<template>
  <section class="panel-44189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44189");
const base = ref(44189);
const total = computed(() => base.value * 2);

function incrementar44189() {
  base.value++;
}
</script>
