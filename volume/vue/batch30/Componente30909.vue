<template>
  <section class="panel-30909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30909");
const base = ref(30909);
const total = computed(() => base.value * 2);

function incrementar30909() {
  base.value++;
}
</script>
