<template>
  <section class="panel-5889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5889");
const base = ref(5889);
const total = computed(() => base.value * 2);

function incrementar5889() {
  base.value++;
}
</script>
