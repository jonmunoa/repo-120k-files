<template>
  <section class="panel-17429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17429");
const base = ref(17429);
const total = computed(() => base.value * 2);

function incrementar17429() {
  base.value++;
}
</script>
