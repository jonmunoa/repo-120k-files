<template>
  <section class="panel-52885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52885");
const base = ref(52885);
const total = computed(() => base.value * 2);

function incrementar52885() {
  base.value++;
}
</script>
