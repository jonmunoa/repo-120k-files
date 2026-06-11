<template>
  <section class="panel-36969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36969");
const base = ref(36969);
const total = computed(() => base.value * 2);

function incrementar36969() {
  base.value++;
}
</script>
