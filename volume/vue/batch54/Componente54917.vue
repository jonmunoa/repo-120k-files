<template>
  <section class="panel-54917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54917");
const base = ref(54917);
const total = computed(() => base.value * 2);

function incrementar54917() {
  base.value++;
}
</script>
