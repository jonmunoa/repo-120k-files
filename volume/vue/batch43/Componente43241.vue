<template>
  <section class="panel-43241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43241");
const base = ref(43241);
const total = computed(() => base.value * 2);

function incrementar43241() {
  base.value++;
}
</script>
