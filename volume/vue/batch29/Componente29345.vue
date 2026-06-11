<template>
  <section class="panel-29345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29345");
const base = ref(29345);
const total = computed(() => base.value * 2);

function incrementar29345() {
  base.value++;
}
</script>
