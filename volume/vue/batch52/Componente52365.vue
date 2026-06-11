<template>
  <section class="panel-52365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52365");
const base = ref(52365);
const total = computed(() => base.value * 2);

function incrementar52365() {
  base.value++;
}
</script>
