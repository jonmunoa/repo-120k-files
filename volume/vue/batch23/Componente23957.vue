<template>
  <section class="panel-23957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23957");
const base = ref(23957);
const total = computed(() => base.value * 2);

function incrementar23957() {
  base.value++;
}
</script>
