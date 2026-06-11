<template>
  <section class="panel-2549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2549");
const base = ref(2549);
const total = computed(() => base.value * 2);

function incrementar2549() {
  base.value++;
}
</script>
