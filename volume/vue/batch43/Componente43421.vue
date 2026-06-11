<template>
  <section class="panel-43421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43421");
const base = ref(43421);
const total = computed(() => base.value * 2);

function incrementar43421() {
  base.value++;
}
</script>
