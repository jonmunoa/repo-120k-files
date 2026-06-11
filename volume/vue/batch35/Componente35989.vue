<template>
  <section class="panel-35989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35989");
const base = ref(35989);
const total = computed(() => base.value * 2);

function incrementar35989() {
  base.value++;
}
</script>
