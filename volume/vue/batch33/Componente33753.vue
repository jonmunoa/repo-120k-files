<template>
  <section class="panel-33753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33753");
const base = ref(33753);
const total = computed(() => base.value * 2);

function incrementar33753() {
  base.value++;
}
</script>
