<template>
  <section class="panel-22889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22889");
const base = ref(22889);
const total = computed(() => base.value * 2);

function incrementar22889() {
  base.value++;
}
</script>
