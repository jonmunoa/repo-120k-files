<template>
  <section class="panel-31237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31237");
const base = ref(31237);
const total = computed(() => base.value * 2);

function incrementar31237() {
  base.value++;
}
</script>
