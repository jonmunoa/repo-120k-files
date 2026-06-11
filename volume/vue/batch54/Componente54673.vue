<template>
  <section class="panel-54673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54673");
const base = ref(54673);
const total = computed(() => base.value * 2);

function incrementar54673() {
  base.value++;
}
</script>
