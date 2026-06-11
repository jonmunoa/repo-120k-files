<template>
  <section class="panel-15677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15677");
const base = ref(15677);
const total = computed(() => base.value * 2);

function incrementar15677() {
  base.value++;
}
</script>
