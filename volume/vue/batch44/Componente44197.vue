<template>
  <section class="panel-44197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44197");
const base = ref(44197);
const total = computed(() => base.value * 2);

function incrementar44197() {
  base.value++;
}
</script>
