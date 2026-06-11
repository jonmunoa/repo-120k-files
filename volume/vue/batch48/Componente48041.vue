<template>
  <section class="panel-48041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48041");
const base = ref(48041);
const total = computed(() => base.value * 2);

function incrementar48041() {
  base.value++;
}
</script>
