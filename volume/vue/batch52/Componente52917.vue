<template>
  <section class="panel-52917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52917");
const base = ref(52917);
const total = computed(() => base.value * 2);

function incrementar52917() {
  base.value++;
}
</script>
