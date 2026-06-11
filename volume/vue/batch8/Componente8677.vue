<template>
  <section class="panel-8677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8677");
const base = ref(8677);
const total = computed(() => base.value * 2);

function incrementar8677() {
  base.value++;
}
</script>
