<template>
  <section class="panel-19313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19313");
const base = ref(19313);
const total = computed(() => base.value * 2);

function incrementar19313() {
  base.value++;
}
</script>
