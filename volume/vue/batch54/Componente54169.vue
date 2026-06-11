<template>
  <section class="panel-54169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54169");
const base = ref(54169);
const total = computed(() => base.value * 2);

function incrementar54169() {
  base.value++;
}
</script>
