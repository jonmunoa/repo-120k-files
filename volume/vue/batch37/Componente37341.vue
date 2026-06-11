<template>
  <section class="panel-37341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37341");
const base = ref(37341);
const total = computed(() => base.value * 2);

function incrementar37341() {
  base.value++;
}
</script>
