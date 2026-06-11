<template>
  <section class="panel-15889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15889");
const base = ref(15889);
const total = computed(() => base.value * 2);

function incrementar15889() {
  base.value++;
}
</script>
