<template>
  <section class="panel-43077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43077");
const base = ref(43077);
const total = computed(() => base.value * 2);

function incrementar43077() {
  base.value++;
}
</script>
