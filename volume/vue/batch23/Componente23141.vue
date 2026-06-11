<template>
  <section class="panel-23141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23141");
const base = ref(23141);
const total = computed(() => base.value * 2);

function incrementar23141() {
  base.value++;
}
</script>
