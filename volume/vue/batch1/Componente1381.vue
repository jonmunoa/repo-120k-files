<template>
  <section class="panel-1381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1381");
const base = ref(1381);
const total = computed(() => base.value * 2);

function incrementar1381() {
  base.value++;
}
</script>
