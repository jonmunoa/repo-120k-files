<template>
  <section class="panel-8313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8313");
const base = ref(8313);
const total = computed(() => base.value * 2);

function incrementar8313() {
  base.value++;
}
</script>
