<template>
  <section class="panel-6073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6073");
const base = ref(6073);
const total = computed(() => base.value * 2);

function incrementar6073() {
  base.value++;
}
</script>
