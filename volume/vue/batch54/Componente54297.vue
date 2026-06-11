<template>
  <section class="panel-54297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54297");
const base = ref(54297);
const total = computed(() => base.value * 2);

function incrementar54297() {
  base.value++;
}
</script>
