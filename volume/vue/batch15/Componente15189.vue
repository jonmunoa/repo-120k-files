<template>
  <section class="panel-15189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15189");
const base = ref(15189);
const total = computed(() => base.value * 2);

function incrementar15189() {
  base.value++;
}
</script>
