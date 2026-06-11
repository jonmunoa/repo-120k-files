<template>
  <section class="panel-8889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8889");
const base = ref(8889);
const total = computed(() => base.value * 2);

function incrementar8889() {
  base.value++;
}
</script>
