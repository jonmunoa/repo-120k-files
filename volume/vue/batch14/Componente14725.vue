<template>
  <section class="panel-14725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14725");
const base = ref(14725);
const total = computed(() => base.value * 2);

function incrementar14725() {
  base.value++;
}
</script>
