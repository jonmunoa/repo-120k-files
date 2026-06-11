<template>
  <section class="panel-43301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43301");
const base = ref(43301);
const total = computed(() => base.value * 2);

function incrementar43301() {
  base.value++;
}
</script>
