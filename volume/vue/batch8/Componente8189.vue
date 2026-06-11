<template>
  <section class="panel-8189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8189");
const base = ref(8189);
const total = computed(() => base.value * 2);

function incrementar8189() {
  base.value++;
}
</script>
