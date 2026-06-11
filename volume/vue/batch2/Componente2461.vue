<template>
  <section class="panel-2461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2461");
const base = ref(2461);
const total = computed(() => base.value * 2);

function incrementar2461() {
  base.value++;
}
</script>
