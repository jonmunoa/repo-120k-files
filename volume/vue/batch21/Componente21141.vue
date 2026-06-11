<template>
  <section class="panel-21141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21141");
const base = ref(21141);
const total = computed(() => base.value * 2);

function incrementar21141() {
  base.value++;
}
</script>
