<template>
  <section class="panel-15177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15177");
const base = ref(15177);
const total = computed(() => base.value * 2);

function incrementar15177() {
  base.value++;
}
</script>
