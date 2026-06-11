<template>
  <section class="panel-56305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56305");
const base = ref(56305);
const total = computed(() => base.value * 2);

function incrementar56305() {
  base.value++;
}
</script>
