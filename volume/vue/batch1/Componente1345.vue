<template>
  <section class="panel-1345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1345");
const base = ref(1345);
const total = computed(() => base.value * 2);

function incrementar1345() {
  base.value++;
}
</script>
