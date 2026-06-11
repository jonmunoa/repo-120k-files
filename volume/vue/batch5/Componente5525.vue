<template>
  <section class="panel-5525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5525");
const base = ref(5525);
const total = computed(() => base.value * 2);

function incrementar5525() {
  base.value++;
}
</script>
