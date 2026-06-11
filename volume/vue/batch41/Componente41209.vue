<template>
  <section class="panel-41209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41209");
const base = ref(41209);
const total = computed(() => base.value * 2);

function incrementar41209() {
  base.value++;
}
</script>
