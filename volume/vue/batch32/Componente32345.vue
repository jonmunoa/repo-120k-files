<template>
  <section class="panel-32345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32345");
const base = ref(32345);
const total = computed(() => base.value * 2);

function incrementar32345() {
  base.value++;
}
</script>
