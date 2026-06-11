<template>
  <section class="panel-38461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38461");
const base = ref(38461);
const total = computed(() => base.value * 2);

function incrementar38461() {
  base.value++;
}
</script>
