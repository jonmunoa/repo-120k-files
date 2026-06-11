<template>
  <section class="panel-43401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43401");
const base = ref(43401);
const total = computed(() => base.value * 2);

function incrementar43401() {
  base.value++;
}
</script>
