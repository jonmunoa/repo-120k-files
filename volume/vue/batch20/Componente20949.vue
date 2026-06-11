<template>
  <section class="panel-20949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20949");
const base = ref(20949);
const total = computed(() => base.value * 2);

function incrementar20949() {
  base.value++;
}
</script>
