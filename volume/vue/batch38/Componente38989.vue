<template>
  <section class="panel-38989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38989");
const base = ref(38989);
const total = computed(() => base.value * 2);

function incrementar38989() {
  base.value++;
}
</script>
