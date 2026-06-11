<template>
  <section class="panel-29553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29553");
const base = ref(29553);
const total = computed(() => base.value * 2);

function incrementar29553() {
  base.value++;
}
</script>
