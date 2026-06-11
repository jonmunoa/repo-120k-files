<template>
  <section class="panel-39197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39197");
const base = ref(39197);
const total = computed(() => base.value * 2);

function incrementar39197() {
  base.value++;
}
</script>
