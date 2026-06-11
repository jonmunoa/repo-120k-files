<template>
  <section class="panel-55613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55613");
const base = ref(55613);
const total = computed(() => base.value * 2);

function incrementar55613() {
  base.value++;
}
</script>
