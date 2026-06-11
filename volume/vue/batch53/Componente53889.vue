<template>
  <section class="panel-53889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53889");
const base = ref(53889);
const total = computed(() => base.value * 2);

function incrementar53889() {
  base.value++;
}
</script>
