<template>
  <section class="panel-1385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1385");
const base = ref(1385);
const total = computed(() => base.value * 2);

function incrementar1385() {
  base.value++;
}
</script>
