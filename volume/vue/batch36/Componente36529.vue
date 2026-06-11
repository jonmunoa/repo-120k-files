<template>
  <section class="panel-36529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36529");
const base = ref(36529);
const total = computed(() => base.value * 2);

function incrementar36529() {
  base.value++;
}
</script>
