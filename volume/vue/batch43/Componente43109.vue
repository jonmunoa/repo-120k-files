<template>
  <section class="panel-43109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43109");
const base = ref(43109);
const total = computed(() => base.value * 2);

function incrementar43109() {
  base.value++;
}
</script>
