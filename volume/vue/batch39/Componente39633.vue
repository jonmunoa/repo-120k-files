<template>
  <section class="panel-39633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39633");
const base = ref(39633);
const total = computed(() => base.value * 2);

function incrementar39633() {
  base.value++;
}
</script>
