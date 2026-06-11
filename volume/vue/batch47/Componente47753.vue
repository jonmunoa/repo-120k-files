<template>
  <section class="panel-47753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47753");
const base = ref(47753);
const total = computed(() => base.value * 2);

function incrementar47753() {
  base.value++;
}
</script>
