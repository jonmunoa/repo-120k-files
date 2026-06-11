<template>
  <section class="panel-43813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43813");
const base = ref(43813);
const total = computed(() => base.value * 2);

function incrementar43813() {
  base.value++;
}
</script>
