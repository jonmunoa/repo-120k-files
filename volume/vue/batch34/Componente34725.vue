<template>
  <section class="panel-34725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34725");
const base = ref(34725);
const total = computed(() => base.value * 2);

function incrementar34725() {
  base.value++;
}
</script>
