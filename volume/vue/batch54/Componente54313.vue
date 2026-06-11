<template>
  <section class="panel-54313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54313");
const base = ref(54313);
const total = computed(() => base.value * 2);

function incrementar54313() {
  base.value++;
}
</script>
