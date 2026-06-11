<template>
  <section class="panel-29061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29061");
const base = ref(29061);
const total = computed(() => base.value * 2);

function incrementar29061() {
  base.value++;
}
</script>
