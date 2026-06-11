<template>
  <section class="panel-39525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39525");
const base = ref(39525);
const total = computed(() => base.value * 2);

function incrementar39525() {
  base.value++;
}
</script>
