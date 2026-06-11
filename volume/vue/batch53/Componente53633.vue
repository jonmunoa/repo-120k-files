<template>
  <section class="panel-53633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53633");
const base = ref(53633);
const total = computed(() => base.value * 2);

function incrementar53633() {
  base.value++;
}
</script>
