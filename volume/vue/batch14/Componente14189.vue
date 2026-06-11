<template>
  <section class="panel-14189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14189");
const base = ref(14189);
const total = computed(() => base.value * 2);

function incrementar14189() {
  base.value++;
}
</script>
