<template>
  <section class="panel-42769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42769");
const base = ref(42769);
const total = computed(() => base.value * 2);

function incrementar42769() {
  base.value++;
}
</script>
