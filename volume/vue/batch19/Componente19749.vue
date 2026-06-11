<template>
  <section class="panel-19749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19749");
const base = ref(19749);
const total = computed(() => base.value * 2);

function incrementar19749() {
  base.value++;
}
</script>
