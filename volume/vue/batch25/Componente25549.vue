<template>
  <section class="panel-25549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25549");
const base = ref(25549);
const total = computed(() => base.value * 2);

function incrementar25549() {
  base.value++;
}
</script>
