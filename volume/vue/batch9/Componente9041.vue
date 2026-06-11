<template>
  <section class="panel-9041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9041");
const base = ref(9041);
const total = computed(() => base.value * 2);

function incrementar9041() {
  base.value++;
}
</script>
