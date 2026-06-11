<template>
  <section class="panel-45757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45757");
const base = ref(45757);
const total = computed(() => base.value * 2);

function incrementar45757() {
  base.value++;
}
</script>
