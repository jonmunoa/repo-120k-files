<template>
  <section class="panel-45701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45701");
const base = ref(45701);
const total = computed(() => base.value * 2);

function incrementar45701() {
  base.value++;
}
</script>
