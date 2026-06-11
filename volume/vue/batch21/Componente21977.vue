<template>
  <section class="panel-21977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21977");
const base = ref(21977);
const total = computed(() => base.value * 2);

function incrementar21977() {
  base.value++;
}
</script>
