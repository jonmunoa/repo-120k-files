<template>
  <section class="panel-19669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19669");
const base = ref(19669);
const total = computed(() => base.value * 2);

function incrementar19669() {
  base.value++;
}
</script>
