<template>
  <section class="panel-30077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30077");
const base = ref(30077);
const total = computed(() => base.value * 2);

function incrementar30077() {
  base.value++;
}
</script>
