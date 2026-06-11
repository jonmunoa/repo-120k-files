<template>
  <section class="panel-3385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3385");
const base = ref(3385);
const total = computed(() => base.value * 2);

function incrementar3385() {
  base.value++;
}
</script>
