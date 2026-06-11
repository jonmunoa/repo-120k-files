<template>
  <section class="panel-44761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44761");
const base = ref(44761);
const total = computed(() => base.value * 2);

function incrementar44761() {
  base.value++;
}
</script>
