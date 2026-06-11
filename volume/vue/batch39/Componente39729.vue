<template>
  <section class="panel-39729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39729");
const base = ref(39729);
const total = computed(() => base.value * 2);

function incrementar39729() {
  base.value++;
}
</script>
