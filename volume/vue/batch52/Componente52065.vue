<template>
  <section class="panel-52065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52065");
const base = ref(52065);
const total = computed(() => base.value * 2);

function incrementar52065() {
  base.value++;
}
</script>
