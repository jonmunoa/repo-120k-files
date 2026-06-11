<template>
  <section class="panel-16049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16049");
const base = ref(16049);
const total = computed(() => base.value * 2);

function incrementar16049() {
  base.value++;
}
</script>
