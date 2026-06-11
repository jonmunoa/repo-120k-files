<template>
  <section class="panel-45605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45605");
const base = ref(45605);
const total = computed(() => base.value * 2);

function incrementar45605() {
  base.value++;
}
</script>
