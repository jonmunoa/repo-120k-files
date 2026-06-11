<template>
  <section class="panel-21989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21989");
const base = ref(21989);
const total = computed(() => base.value * 2);

function incrementar21989() {
  base.value++;
}
</script>
