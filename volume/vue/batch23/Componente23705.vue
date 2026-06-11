<template>
  <section class="panel-23705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23705");
const base = ref(23705);
const total = computed(() => base.value * 2);

function incrementar23705() {
  base.value++;
}
</script>
