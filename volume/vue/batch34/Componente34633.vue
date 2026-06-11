<template>
  <section class="panel-34633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34633");
const base = ref(34633);
const total = computed(() => base.value * 2);

function incrementar34633() {
  base.value++;
}
</script>
