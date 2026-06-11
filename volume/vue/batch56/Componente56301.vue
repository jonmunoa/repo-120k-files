<template>
  <section class="panel-56301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56301");
const base = ref(56301);
const total = computed(() => base.value * 2);

function incrementar56301() {
  base.value++;
}
</script>
