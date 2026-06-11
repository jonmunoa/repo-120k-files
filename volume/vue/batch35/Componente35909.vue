<template>
  <section class="panel-35909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35909");
const base = ref(35909);
const total = computed(() => base.value * 2);

function incrementar35909() {
  base.value++;
}
</script>
