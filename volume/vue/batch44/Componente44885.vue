<template>
  <section class="panel-44885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44885");
const base = ref(44885);
const total = computed(() => base.value * 2);

function incrementar44885() {
  base.value++;
}
</script>
