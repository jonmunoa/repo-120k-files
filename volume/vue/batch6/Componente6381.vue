<template>
  <section class="panel-6381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6381");
const base = ref(6381);
const total = computed(() => base.value * 2);

function incrementar6381() {
  base.value++;
}
</script>
