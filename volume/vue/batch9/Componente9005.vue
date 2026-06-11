<template>
  <section class="panel-9005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9005");
const base = ref(9005);
const total = computed(() => base.value * 2);

function incrementar9005() {
  base.value++;
}
</script>
