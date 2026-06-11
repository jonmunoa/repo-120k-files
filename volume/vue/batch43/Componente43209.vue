<template>
  <section class="panel-43209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43209");
const base = ref(43209);
const total = computed(() => base.value * 2);

function incrementar43209() {
  base.value++;
}
</script>
