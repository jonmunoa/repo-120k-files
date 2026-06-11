<template>
  <section class="panel-56909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56909");
const base = ref(56909);
const total = computed(() => base.value * 2);

function incrementar56909() {
  base.value++;
}
</script>
