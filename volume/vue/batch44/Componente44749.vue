<template>
  <section class="panel-44749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44749");
const base = ref(44749);
const total = computed(() => base.value * 2);

function incrementar44749() {
  base.value++;
}
</script>
