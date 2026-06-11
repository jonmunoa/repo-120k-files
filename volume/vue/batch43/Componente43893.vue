<template>
  <section class="panel-43893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43893");
const base = ref(43893);
const total = computed(() => base.value * 2);

function incrementar43893() {
  base.value++;
}
</script>
