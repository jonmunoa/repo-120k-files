<template>
  <section class="panel-29221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29221");
const base = ref(29221);
const total = computed(() => base.value * 2);

function incrementar29221() {
  base.value++;
}
</script>
