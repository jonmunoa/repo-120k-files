<template>
  <section class="panel-52077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52077");
const base = ref(52077);
const total = computed(() => base.value * 2);

function incrementar52077() {
  base.value++;
}
</script>
