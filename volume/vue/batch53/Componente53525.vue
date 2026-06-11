<template>
  <section class="panel-53525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53525");
const base = ref(53525);
const total = computed(() => base.value * 2);

function incrementar53525() {
  base.value++;
}
</script>
