<template>
  <section class="panel-21169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21169");
const base = ref(21169);
const total = computed(() => base.value * 2);

function incrementar21169() {
  base.value++;
}
</script>
