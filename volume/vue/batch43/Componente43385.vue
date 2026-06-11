<template>
  <section class="panel-43385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43385");
const base = ref(43385);
const total = computed(() => base.value * 2);

function incrementar43385() {
  base.value++;
}
</script>
