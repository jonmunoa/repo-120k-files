<template>
  <section class="panel-52725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52725");
const base = ref(52725);
const total = computed(() => base.value * 2);

function incrementar52725() {
  base.value++;
}
</script>
