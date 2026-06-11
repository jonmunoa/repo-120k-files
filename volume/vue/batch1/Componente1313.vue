<template>
  <section class="panel-1313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1313");
const base = ref(1313);
const total = computed(() => base.value * 2);

function incrementar1313() {
  base.value++;
}
</script>
