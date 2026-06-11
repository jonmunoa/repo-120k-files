<template>
  <section class="panel-29197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29197");
const base = ref(29197);
const total = computed(() => base.value * 2);

function incrementar29197() {
  base.value++;
}
</script>
