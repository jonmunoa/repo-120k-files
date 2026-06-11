<template>
  <section class="panel-7385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7385");
const base = ref(7385);
const total = computed(() => base.value * 2);

function incrementar7385() {
  base.value++;
}
</script>
