<template>
  <section class="panel-19153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19153");
const base = ref(19153);
const total = computed(() => base.value * 2);

function incrementar19153() {
  base.value++;
}
</script>
