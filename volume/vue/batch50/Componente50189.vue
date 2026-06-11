<template>
  <section class="panel-50189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50189");
const base = ref(50189);
const total = computed(() => base.value * 2);

function incrementar50189() {
  base.value++;
}
</script>
