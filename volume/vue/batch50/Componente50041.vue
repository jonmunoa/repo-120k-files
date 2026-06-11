<template>
  <section class="panel-50041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50041");
const base = ref(50041);
const total = computed(() => base.value * 2);

function incrementar50041() {
  base.value++;
}
</script>
