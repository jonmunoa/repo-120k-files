<template>
  <section class="panel-12045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12045");
const base = ref(12045);
const total = computed(() => base.value * 2);

function incrementar12045() {
  base.value++;
}
</script>
