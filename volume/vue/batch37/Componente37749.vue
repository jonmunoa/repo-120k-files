<template>
  <section class="panel-37749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37749");
const base = ref(37749);
const total = computed(() => base.value * 2);

function incrementar37749() {
  base.value++;
}
</script>
