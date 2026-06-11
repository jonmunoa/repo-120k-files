<template>
  <section class="panel-6481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6481");
const base = ref(6481);
const total = computed(() => base.value * 2);

function incrementar6481() {
  base.value++;
}
</script>
