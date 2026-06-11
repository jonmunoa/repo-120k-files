<template>
  <section class="panel-43017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43017");
const base = ref(43017);
const total = computed(() => base.value * 2);

function incrementar43017() {
  base.value++;
}
</script>
