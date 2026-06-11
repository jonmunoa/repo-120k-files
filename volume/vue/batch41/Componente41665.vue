<template>
  <section class="panel-41665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41665");
const base = ref(41665);
const total = computed(() => base.value * 2);

function incrementar41665() {
  base.value++;
}
</script>
