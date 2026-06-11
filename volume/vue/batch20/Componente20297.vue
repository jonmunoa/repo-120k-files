<template>
  <section class="panel-20297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20297");
const base = ref(20297);
const total = computed(() => base.value * 2);

function incrementar20297() {
  base.value++;
}
</script>
