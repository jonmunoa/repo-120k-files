<template>
  <section class="panel-1141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1141");
const base = ref(1141);
const total = computed(() => base.value * 2);

function incrementar1141() {
  base.value++;
}
</script>
