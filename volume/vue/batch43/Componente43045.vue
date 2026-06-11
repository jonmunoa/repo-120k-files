<template>
  <section class="panel-43045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43045");
const base = ref(43045);
const total = computed(() => base.value * 2);

function incrementar43045() {
  base.value++;
}
</script>
