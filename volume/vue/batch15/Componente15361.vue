<template>
  <section class="panel-15361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15361");
const base = ref(15361);
const total = computed(() => base.value * 2);

function incrementar15361() {
  base.value++;
}
</script>
