<template>
  <section class="panel-16405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16405");
const base = ref(16405);
const total = computed(() => base.value * 2);

function incrementar16405() {
  base.value++;
}
</script>
