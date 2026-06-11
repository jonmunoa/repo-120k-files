<template>
  <section class="panel-54833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54833");
const base = ref(54833);
const total = computed(() => base.value * 2);

function incrementar54833() {
  base.value++;
}
</script>
