<template>
  <section class="panel-19633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19633");
const base = ref(19633);
const total = computed(() => base.value * 2);

function incrementar19633() {
  base.value++;
}
</script>
