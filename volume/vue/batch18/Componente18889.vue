<template>
  <section class="panel-18889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18889");
const base = ref(18889);
const total = computed(() => base.value * 2);

function incrementar18889() {
  base.value++;
}
</script>
