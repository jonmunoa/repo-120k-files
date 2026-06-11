<template>
  <section class="panel-6633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6633");
const base = ref(6633);
const total = computed(() => base.value * 2);

function incrementar6633() {
  base.value++;
}
</script>
