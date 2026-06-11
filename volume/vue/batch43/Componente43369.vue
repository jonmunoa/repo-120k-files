<template>
  <section class="panel-43369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43369");
const base = ref(43369);
const total = computed(() => base.value * 2);

function incrementar43369() {
  base.value++;
}
</script>
