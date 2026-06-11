<template>
  <section class="panel-1677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1677");
const base = ref(1677);
const total = computed(() => base.value * 2);

function incrementar1677() {
  base.value++;
}
</script>
