<template>
  <section class="panel-49141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49141");
const base = ref(49141);
const total = computed(() => base.value * 2);

function incrementar49141() {
  base.value++;
}
</script>
