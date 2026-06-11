<template>
  <section class="panel-1701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1701");
const base = ref(1701);
const total = computed(() => base.value * 2);

function incrementar1701() {
  base.value++;
}
</script>
