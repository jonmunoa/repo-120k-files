<template>
  <section class="panel-7281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7281");
const base = ref(7281);
const total = computed(() => base.value * 2);

function incrementar7281() {
  base.value++;
}
</script>
