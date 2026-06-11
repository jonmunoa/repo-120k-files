<template>
  <section class="panel-33381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33381");
const base = ref(33381);
const total = computed(() => base.value * 2);

function incrementar33381() {
  base.value++;
}
</script>
