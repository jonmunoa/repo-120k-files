<template>
  <section class="panel-29137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29137");
const base = ref(29137);
const total = computed(() => base.value * 2);

function incrementar29137() {
  base.value++;
}
</script>
