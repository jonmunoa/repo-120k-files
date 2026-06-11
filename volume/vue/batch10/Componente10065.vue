<template>
  <section class="panel-10065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10065");
const base = ref(10065);
const total = computed(() => base.value * 2);

function incrementar10065() {
  base.value++;
}
</script>
