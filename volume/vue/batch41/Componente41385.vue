<template>
  <section class="panel-41385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41385");
const base = ref(41385);
const total = computed(() => base.value * 2);

function incrementar41385() {
  base.value++;
}
</script>
