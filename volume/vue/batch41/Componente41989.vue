<template>
  <section class="panel-41989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41989");
const base = ref(41989);
const total = computed(() => base.value * 2);

function incrementar41989() {
  base.value++;
}
</script>
