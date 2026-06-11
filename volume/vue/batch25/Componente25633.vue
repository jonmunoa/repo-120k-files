<template>
  <section class="panel-25633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25633");
const base = ref(25633);
const total = computed(() => base.value * 2);

function incrementar25633() {
  base.value++;
}
</script>
