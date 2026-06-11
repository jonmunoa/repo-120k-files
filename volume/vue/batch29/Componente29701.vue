<template>
  <section class="panel-29701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29701");
const base = ref(29701);
const total = computed(() => base.value * 2);

function incrementar29701() {
  base.value++;
}
</script>
