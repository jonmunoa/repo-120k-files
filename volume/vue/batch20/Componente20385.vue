<template>
  <section class="panel-20385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20385");
const base = ref(20385);
const total = computed(() => base.value * 2);

function incrementar20385() {
  base.value++;
}
</script>
