<template>
  <section class="panel-55633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55633");
const base = ref(55633);
const total = computed(() => base.value * 2);

function incrementar55633() {
  base.value++;
}
</script>
