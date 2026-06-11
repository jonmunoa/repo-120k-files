<template>
  <section class="panel-56297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56297");
const base = ref(56297);
const total = computed(() => base.value * 2);

function incrementar56297() {
  base.value++;
}
</script>
