<template>
  <section class="panel-52825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52825");
const base = ref(52825);
const total = computed(() => base.value * 2);

function incrementar52825() {
  base.value++;
}
</script>
