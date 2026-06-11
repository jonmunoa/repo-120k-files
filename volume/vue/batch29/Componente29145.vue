<template>
  <section class="panel-29145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29145");
const base = ref(29145);
const total = computed(() => base.value * 2);

function incrementar29145() {
  base.value++;
}
</script>
