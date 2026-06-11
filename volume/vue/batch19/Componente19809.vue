<template>
  <section class="panel-19809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19809");
const base = ref(19809);
const total = computed(() => base.value * 2);

function incrementar19809() {
  base.value++;
}
</script>
