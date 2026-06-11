<template>
  <section class="panel-43161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43161");
const base = ref(43161);
const total = computed(() => base.value * 2);

function incrementar43161() {
  base.value++;
}
</script>
