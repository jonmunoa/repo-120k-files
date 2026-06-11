<template>
  <section class="panel-15345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15345");
const base = ref(15345);
const total = computed(() => base.value * 2);

function incrementar15345() {
  base.value++;
}
</script>
