<template>
  <section class="panel-36481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36481");
const base = ref(36481);
const total = computed(() => base.value * 2);

function incrementar36481() {
  base.value++;
}
</script>
