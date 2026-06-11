<template>
  <section class="panel-20605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20605");
const base = ref(20605);
const total = computed(() => base.value * 2);

function incrementar20605() {
  base.value++;
}
</script>
