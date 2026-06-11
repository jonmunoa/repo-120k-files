<template>
  <section class="panel-41741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41741");
const base = ref(41741);
const total = computed(() => base.value * 2);

function incrementar41741() {
  base.value++;
}
</script>
