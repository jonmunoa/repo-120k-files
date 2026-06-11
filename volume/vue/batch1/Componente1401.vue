<template>
  <section class="panel-1401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1401");
const base = ref(1401);
const total = computed(() => base.value * 2);

function incrementar1401() {
  base.value++;
}
</script>
