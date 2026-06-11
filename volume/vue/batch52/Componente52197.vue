<template>
  <section class="panel-52197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52197");
const base = ref(52197);
const total = computed(() => base.value * 2);

function incrementar52197() {
  base.value++;
}
</script>
