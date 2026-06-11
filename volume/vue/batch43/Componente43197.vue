<template>
  <section class="panel-43197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43197");
const base = ref(43197);
const total = computed(() => base.value * 2);

function incrementar43197() {
  base.value++;
}
</script>
