<template>
  <section class="panel-44385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44385");
const base = ref(44385);
const total = computed(() => base.value * 2);

function incrementar44385() {
  base.value++;
}
</script>
