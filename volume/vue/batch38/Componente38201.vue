<template>
  <section class="panel-38201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38201");
const base = ref(38201);
const total = computed(() => base.value * 2);

function incrementar38201() {
  base.value++;
}
</script>
