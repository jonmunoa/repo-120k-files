<template>
  <section class="panel-38757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38757");
const base = ref(38757);
const total = computed(() => base.value * 2);

function incrementar38757() {
  base.value++;
}
</script>
