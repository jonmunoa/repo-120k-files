<template>
  <section class="panel-22529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22529");
const base = ref(22529);
const total = computed(() => base.value * 2);

function incrementar22529() {
  base.value++;
}
</script>
