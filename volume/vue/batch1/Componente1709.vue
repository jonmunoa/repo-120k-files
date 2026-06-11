<template>
  <section class="panel-1709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1709");
const base = ref(1709);
const total = computed(() => base.value * 2);

function incrementar1709() {
  base.value++;
}
</script>
