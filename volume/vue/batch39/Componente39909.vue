<template>
  <section class="panel-39909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39909");
const base = ref(39909);
const total = computed(() => base.value * 2);

function incrementar39909() {
  base.value++;
}
</script>
