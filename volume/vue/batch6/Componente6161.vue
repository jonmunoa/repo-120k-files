<template>
  <section class="panel-6161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6161");
const base = ref(6161);
const total = computed(() => base.value * 2);

function incrementar6161() {
  base.value++;
}
</script>
