<template>
  <section class="panel-15261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15261");
const base = ref(15261);
const total = computed(() => base.value * 2);

function incrementar15261() {
  base.value++;
}
</script>
