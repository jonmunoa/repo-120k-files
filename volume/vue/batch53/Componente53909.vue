<template>
  <section class="panel-53909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53909");
const base = ref(53909);
const total = computed(() => base.value * 2);

function incrementar53909() {
  base.value++;
}
</script>
