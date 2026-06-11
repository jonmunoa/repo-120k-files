<template>
  <section class="panel-48533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48533");
const base = ref(48533);
const total = computed(() => base.value * 2);

function incrementar48533() {
  base.value++;
}
</script>
