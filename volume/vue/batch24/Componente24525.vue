<template>
  <section class="panel-24525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24525");
const base = ref(24525);
const total = computed(() => base.value * 2);

function incrementar24525() {
  base.value++;
}
</script>
