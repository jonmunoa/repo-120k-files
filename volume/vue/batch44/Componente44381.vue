<template>
  <section class="panel-44381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44381");
const base = ref(44381);
const total = computed(() => base.value * 2);

function incrementar44381() {
  base.value++;
}
</script>
