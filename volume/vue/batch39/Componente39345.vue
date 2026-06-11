<template>
  <section class="panel-39345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39345");
const base = ref(39345);
const total = computed(() => base.value * 2);

function incrementar39345() {
  base.value++;
}
</script>
