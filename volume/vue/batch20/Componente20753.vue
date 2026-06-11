<template>
  <section class="panel-20753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20753");
const base = ref(20753);
const total = computed(() => base.value * 2);

function incrementar20753() {
  base.value++;
}
</script>
