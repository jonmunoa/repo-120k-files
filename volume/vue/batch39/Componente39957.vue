<template>
  <section class="panel-39957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39957");
const base = ref(39957);
const total = computed(() => base.value * 2);

function incrementar39957() {
  base.value++;
}
</script>
