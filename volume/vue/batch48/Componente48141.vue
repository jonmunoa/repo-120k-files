<template>
  <section class="panel-48141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48141");
const base = ref(48141);
const total = computed(() => base.value * 2);

function incrementar48141() {
  base.value++;
}
</script>
