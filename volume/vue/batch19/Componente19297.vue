<template>
  <section class="panel-19297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19297");
const base = ref(19297);
const total = computed(() => base.value * 2);

function incrementar19297() {
  base.value++;
}
</script>
