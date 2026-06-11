<template>
  <section class="panel-24989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24989");
const base = ref(24989);
const total = computed(() => base.value * 2);

function incrementar24989() {
  base.value++;
}
</script>
