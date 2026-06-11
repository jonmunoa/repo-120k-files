<template>
  <section class="panel-20529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20529");
const base = ref(20529);
const total = computed(() => base.value * 2);

function incrementar20529() {
  base.value++;
}
</script>
