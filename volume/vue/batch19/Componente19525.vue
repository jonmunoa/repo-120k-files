<template>
  <section class="panel-19525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19525");
const base = ref(19525);
const total = computed(() => base.value * 2);

function incrementar19525() {
  base.value++;
}
</script>
