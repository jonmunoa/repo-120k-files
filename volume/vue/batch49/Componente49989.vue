<template>
  <section class="panel-49989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49989");
const base = ref(49989);
const total = computed(() => base.value * 2);

function incrementar49989() {
  base.value++;
}
</script>
