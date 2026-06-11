<template>
  <section class="panel-45305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45305");
const base = ref(45305);
const total = computed(() => base.value * 2);

function incrementar45305() {
  base.value++;
}
</script>
