<template>
  <section class="panel-9525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9525");
const base = ref(9525);
const total = computed(() => base.value * 2);

function incrementar9525() {
  base.value++;
}
</script>
