<template>
  <section class="panel-56041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56041");
const base = ref(56041);
const total = computed(() => base.value * 2);

function incrementar56041() {
  base.value++;
}
</script>
