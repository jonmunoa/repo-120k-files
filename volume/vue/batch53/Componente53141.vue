<template>
  <section class="panel-53141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53141");
const base = ref(53141);
const total = computed(() => base.value * 2);

function incrementar53141() {
  base.value++;
}
</script>
