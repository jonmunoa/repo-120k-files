<template>
  <section class="panel-54141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54141");
const base = ref(54141);
const total = computed(() => base.value * 2);

function incrementar54141() {
  base.value++;
}
</script>
