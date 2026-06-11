<template>
  <section class="panel-16197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16197");
const base = ref(16197);
const total = computed(() => base.value * 2);

function incrementar16197() {
  base.value++;
}
</script>
