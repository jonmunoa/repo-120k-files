<template>
  <section class="panel-29673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29673");
const base = ref(29673);
const total = computed(() => base.value * 2);

function incrementar29673() {
  base.value++;
}
</script>
