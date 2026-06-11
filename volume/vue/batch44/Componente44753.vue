<template>
  <section class="panel-44753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44753");
const base = ref(44753);
const total = computed(() => base.value * 2);

function incrementar44753() {
  base.value++;
}
</script>
