<template>
  <section class="panel-12665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12665");
const base = ref(12665);
const total = computed(() => base.value * 2);

function incrementar12665() {
  base.value++;
}
</script>
