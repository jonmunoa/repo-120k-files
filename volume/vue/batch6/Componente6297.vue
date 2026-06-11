<template>
  <section class="panel-6297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6297");
const base = ref(6297);
const total = computed(() => base.value * 2);

function incrementar6297() {
  base.value++;
}
</script>
