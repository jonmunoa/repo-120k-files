<template>
  <section class="panel-36669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36669");
const base = ref(36669);
const total = computed(() => base.value * 2);

function incrementar36669() {
  base.value++;
}
</script>
