<template>
  <section class="panel-45041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45041");
const base = ref(45041);
const total = computed(() => base.value * 2);

function incrementar45041() {
  base.value++;
}
</script>
