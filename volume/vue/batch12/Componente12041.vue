<template>
  <section class="panel-12041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12041");
const base = ref(12041);
const total = computed(() => base.value * 2);

function incrementar12041() {
  base.value++;
}
</script>
