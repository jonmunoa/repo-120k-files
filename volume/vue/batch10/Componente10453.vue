<template>
  <section class="panel-10453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10453");
const base = ref(10453);
const total = computed(() => base.value * 2);

function incrementar10453() {
  base.value++;
}
</script>
