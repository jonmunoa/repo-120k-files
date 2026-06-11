<template>
  <section class="panel-30329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30329");
const base = ref(30329);
const total = computed(() => base.value * 2);

function incrementar30329() {
  base.value++;
}
</script>
