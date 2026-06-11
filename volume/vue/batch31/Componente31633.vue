<template>
  <section class="panel-31633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31633");
const base = ref(31633);
const total = computed(() => base.value * 2);

function incrementar31633() {
  base.value++;
}
</script>
