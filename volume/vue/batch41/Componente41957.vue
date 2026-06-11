<template>
  <section class="panel-41957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41957");
const base = ref(41957);
const total = computed(() => base.value * 2);

function incrementar41957() {
  base.value++;
}
</script>
