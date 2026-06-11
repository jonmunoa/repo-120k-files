<template>
  <section class="panel-1317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1317");
const base = ref(1317);
const total = computed(() => base.value * 2);

function incrementar1317() {
  base.value++;
}
</script>
