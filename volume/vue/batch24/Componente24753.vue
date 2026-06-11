<template>
  <section class="panel-24753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24753");
const base = ref(24753);
const total = computed(() => base.value * 2);

function incrementar24753() {
  base.value++;
}
</script>
