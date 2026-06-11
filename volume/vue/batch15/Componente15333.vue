<template>
  <section class="panel-15333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15333");
const base = ref(15333);
const total = computed(() => base.value * 2);

function incrementar15333() {
  base.value++;
}
</script>
