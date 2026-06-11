<template>
  <section class="panel-16833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16833");
const base = ref(16833);
const total = computed(() => base.value * 2);

function incrementar16833() {
  base.value++;
}
</script>
