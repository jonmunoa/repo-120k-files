<template>
  <section class="panel-36337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36337");
const base = ref(36337);
const total = computed(() => base.value * 2);

function incrementar36337() {
  base.value++;
}
</script>
