<template>
  <section class="panel-38633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38633");
const base = ref(38633);
const total = computed(() => base.value * 2);

function incrementar38633() {
  base.value++;
}
</script>
