<template>
  <section class="panel-54469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54469");
const base = ref(54469);
const total = computed(() => base.value * 2);

function incrementar54469() {
  base.value++;
}
</script>
