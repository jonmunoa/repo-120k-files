<template>
  <section class="panel-19385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19385");
const base = ref(19385);
const total = computed(() => base.value * 2);

function incrementar19385() {
  base.value++;
}
</script>
