<template>
  <section class="panel-6809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6809");
const base = ref(6809);
const total = computed(() => base.value * 2);

function incrementar6809() {
  base.value++;
}
</script>
