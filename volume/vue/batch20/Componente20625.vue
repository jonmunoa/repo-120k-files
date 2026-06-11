<template>
  <section class="panel-20625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20625");
const base = ref(20625);
const total = computed(() => base.value * 2);

function incrementar20625() {
  base.value++;
}
</script>
