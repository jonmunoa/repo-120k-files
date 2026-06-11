<template>
  <section class="panel-51917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51917");
const base = ref(51917);
const total = computed(() => base.value * 2);

function incrementar51917() {
  base.value++;
}
</script>
