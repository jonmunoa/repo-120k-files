<template>
  <section class="panel-52313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52313");
const base = ref(52313);
const total = computed(() => base.value * 2);

function incrementar52313() {
  base.value++;
}
</script>
