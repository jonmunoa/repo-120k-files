<template>
  <section class="panel-19109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19109");
const base = ref(19109);
const total = computed(() => base.value * 2);

function incrementar19109() {
  base.value++;
}
</script>
