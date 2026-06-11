<template>
  <section class="panel-10689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10689");
const base = ref(10689);
const total = computed(() => base.value * 2);

function incrementar10689() {
  base.value++;
}
</script>
