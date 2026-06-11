<template>
  <section class="panel-54669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54669");
const base = ref(54669);
const total = computed(() => base.value * 2);

function incrementar54669() {
  base.value++;
}
</script>
