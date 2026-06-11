<template>
  <section class="panel-27197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27197");
const base = ref(27197);
const total = computed(() => base.value * 2);

function incrementar27197() {
  base.value++;
}
</script>
