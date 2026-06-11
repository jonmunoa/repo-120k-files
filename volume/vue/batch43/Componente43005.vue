<template>
  <section class="panel-43005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43005");
const base = ref(43005);
const total = computed(() => base.value * 2);

function incrementar43005() {
  base.value++;
}
</script>
