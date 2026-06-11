<template>
  <section class="panel-23241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23241");
const base = ref(23241);
const total = computed(() => base.value * 2);

function incrementar23241() {
  base.value++;
}
</script>
