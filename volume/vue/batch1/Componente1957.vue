<template>
  <section class="panel-1957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1957");
const base = ref(1957);
const total = computed(() => base.value * 2);

function incrementar1957() {
  base.value++;
}
</script>
