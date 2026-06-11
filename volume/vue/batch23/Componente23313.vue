<template>
  <section class="panel-23313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23313");
const base = ref(23313);
const total = computed(() => base.value * 2);

function incrementar23313() {
  base.value++;
}
</script>
