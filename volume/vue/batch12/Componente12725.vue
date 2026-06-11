<template>
  <section class="panel-12725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12725");
const base = ref(12725);
const total = computed(() => base.value * 2);

function incrementar12725() {
  base.value++;
}
</script>
