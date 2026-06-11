<template>
  <section class="panel-31801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31801");
const base = ref(31801);
const total = computed(() => base.value * 2);

function incrementar31801() {
  base.value++;
}
</script>
