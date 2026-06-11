<template>
  <section class="panel-54033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54033");
const base = ref(54033);
const total = computed(() => base.value * 2);

function incrementar54033() {
  base.value++;
}
</script>
