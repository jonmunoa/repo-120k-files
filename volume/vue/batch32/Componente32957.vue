<template>
  <section class="panel-32957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32957");
const base = ref(32957);
const total = computed(() => base.value * 2);

function incrementar32957() {
  base.value++;
}
</script>
