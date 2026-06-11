<template>
  <section class="panel-27989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27989");
const base = ref(27989);
const total = computed(() => base.value * 2);

function incrementar27989() {
  base.value++;
}
</script>
