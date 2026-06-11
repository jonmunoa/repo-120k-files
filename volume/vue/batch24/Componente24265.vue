<template>
  <section class="panel-24265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24265");
const base = ref(24265);
const total = computed(() => base.value * 2);

function incrementar24265() {
  base.value++;
}
</script>
