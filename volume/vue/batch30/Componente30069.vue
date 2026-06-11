<template>
  <section class="panel-30069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30069");
const base = ref(30069);
const total = computed(() => base.value * 2);

function incrementar30069() {
  base.value++;
}
</script>
