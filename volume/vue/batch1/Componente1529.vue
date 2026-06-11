<template>
  <section class="panel-1529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1529");
const base = ref(1529);
const total = computed(() => base.value * 2);

function incrementar1529() {
  base.value++;
}
</script>
