<template>
  <section class="panel-44213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44213");
const base = ref(44213);
const total = computed(() => base.value * 2);

function incrementar44213() {
  base.value++;
}
</script>
