<template>
  <section class="panel-52037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52037");
const base = ref(52037);
const total = computed(() => base.value * 2);

function incrementar52037() {
  base.value++;
}
</script>
