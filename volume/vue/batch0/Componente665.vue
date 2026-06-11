<template>
  <section class="panel-665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 665");
const base = ref(665);
const total = computed(() => base.value * 2);

function incrementar665() {
  base.value++;
}
</script>
