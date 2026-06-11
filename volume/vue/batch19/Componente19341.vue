<template>
  <section class="panel-19341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19341");
const base = ref(19341);
const total = computed(() => base.value * 2);

function incrementar19341() {
  base.value++;
}
</script>
