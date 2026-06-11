<template>
  <section class="panel-16529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16529");
const base = ref(16529);
const total = computed(() => base.value * 2);

function incrementar16529() {
  base.value++;
}
</script>
