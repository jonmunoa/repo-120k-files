<template>
  <section class="panel-19673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19673");
const base = ref(19673);
const total = computed(() => base.value * 2);

function incrementar19673() {
  base.value++;
}
</script>
