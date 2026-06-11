<template>
  <section class="panel-30317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30317");
const base = ref(30317);
const total = computed(() => base.value * 2);

function incrementar30317() {
  base.value++;
}
</script>
