<template>
  <section class="panel-24909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24909");
const base = ref(24909);
const total = computed(() => base.value * 2);

function incrementar24909() {
  base.value++;
}
</script>
