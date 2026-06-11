<template>
  <section class="panel-56381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56381");
const base = ref(56381);
const total = computed(() => base.value * 2);

function incrementar56381() {
  base.value++;
}
</script>
