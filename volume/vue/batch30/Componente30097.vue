<template>
  <section class="panel-30097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30097");
const base = ref(30097);
const total = computed(() => base.value * 2);

function incrementar30097() {
  base.value++;
}
</script>
