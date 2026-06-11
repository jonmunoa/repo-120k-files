<template>
  <section class="panel-43061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43061");
const base = ref(43061);
const total = computed(() => base.value * 2);

function incrementar43061() {
  base.value++;
}
</script>
