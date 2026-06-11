<template>
  <section class="panel-38189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38189");
const base = ref(38189);
const total = computed(() => base.value * 2);

function incrementar38189() {
  base.value++;
}
</script>
