<template>
  <section class="panel-43521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43521");
const base = ref(43521);
const total = computed(() => base.value * 2);

function incrementar43521() {
  base.value++;
}
</script>
