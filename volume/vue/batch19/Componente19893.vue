<template>
  <section class="panel-19893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19893");
const base = ref(19893);
const total = computed(() => base.value * 2);

function incrementar19893() {
  base.value++;
}
</script>
