<template>
  <section class="panel-4957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4957");
const base = ref(4957);
const total = computed(() => base.value * 2);

function incrementar4957() {
  base.value++;
}
</script>
