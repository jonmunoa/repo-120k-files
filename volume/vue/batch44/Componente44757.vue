<template>
  <section class="panel-44757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44757");
const base = ref(44757);
const total = computed(() => base.value * 2);

function incrementar44757() {
  base.value++;
}
</script>
