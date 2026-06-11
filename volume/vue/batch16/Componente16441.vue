<template>
  <section class="panel-16441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16441");
const base = ref(16441);
const total = computed(() => base.value * 2);

function incrementar16441() {
  base.value++;
}
</script>
