<template>
  <section class="panel-461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 461");
const base = ref(461);
const total = computed(() => base.value * 2);

function incrementar461() {
  base.value++;
}
</script>
