<template>
  <section class="panel-31141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31141");
const base = ref(31141);
const total = computed(() => base.value * 2);

function incrementar31141() {
  base.value++;
}
</script>
