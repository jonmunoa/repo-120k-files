<template>
  <section class="panel-38317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38317");
const base = ref(38317);
const total = computed(() => base.value * 2);

function incrementar38317() {
  base.value++;
}
</script>
