<template>
  <section class="panel-6933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6933");
const base = ref(6933);
const total = computed(() => base.value * 2);

function incrementar6933() {
  base.value++;
}
</script>
