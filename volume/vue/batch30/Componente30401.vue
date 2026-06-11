<template>
  <section class="panel-30401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30401");
const base = ref(30401);
const total = computed(() => base.value * 2);

function incrementar30401() {
  base.value++;
}
</script>
