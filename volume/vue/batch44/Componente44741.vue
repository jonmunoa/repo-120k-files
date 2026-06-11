<template>
  <section class="panel-44741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44741");
const base = ref(44741);
const total = computed(() => base.value * 2);

function incrementar44741() {
  base.value++;
}
</script>
