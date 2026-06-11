<template>
  <section class="panel-24889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24889");
const base = ref(24889);
const total = computed(() => base.value * 2);

function incrementar24889() {
  base.value++;
}
</script>
