<template>
  <section class="panel-20957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20957");
const base = ref(20957);
const total = computed(() => base.value * 2);

function incrementar20957() {
  base.value++;
}
</script>
