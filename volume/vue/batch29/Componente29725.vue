<template>
  <section class="panel-29725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29725");
const base = ref(29725);
const total = computed(() => base.value * 2);

function incrementar29725() {
  base.value++;
}
</script>
