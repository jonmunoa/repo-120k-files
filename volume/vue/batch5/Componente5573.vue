<template>
  <section class="panel-5573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5573");
const base = ref(5573);
const total = computed(() => base.value * 2);

function incrementar5573() {
  base.value++;
}
</script>
