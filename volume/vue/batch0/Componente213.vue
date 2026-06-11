<template>
  <section class="panel-213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 213");
const base = ref(213);
const total = computed(() => base.value * 2);

function incrementar213() {
  base.value++;
}
</script>
