<template>
  <section class="panel-22725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22725");
const base = ref(22725);
const total = computed(() => base.value * 2);

function incrementar22725() {
  base.value++;
}
</script>
