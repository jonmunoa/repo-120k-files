<template>
  <section class="panel-45189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45189");
const base = ref(45189);
const total = computed(() => base.value * 2);

function incrementar45189() {
  base.value++;
}
</script>
