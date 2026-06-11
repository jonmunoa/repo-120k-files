<template>
  <section class="panel-39757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39757");
const base = ref(39757);
const total = computed(() => base.value * 2);

function incrementar39757() {
  base.value++;
}
</script>
