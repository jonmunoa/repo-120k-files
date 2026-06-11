<template>
  <section class="panel-54369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54369");
const base = ref(54369);
const total = computed(() => base.value * 2);

function incrementar54369() {
  base.value++;
}
</script>
