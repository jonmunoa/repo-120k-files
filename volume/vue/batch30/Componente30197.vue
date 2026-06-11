<template>
  <section class="panel-30197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30197");
const base = ref(30197);
const total = computed(() => base.value * 2);

function incrementar30197() {
  base.value++;
}
</script>
