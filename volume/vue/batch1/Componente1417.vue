<template>
  <section class="panel-1417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1417");
const base = ref(1417);
const total = computed(() => base.value * 2);

function incrementar1417() {
  base.value++;
}
</script>
