<template>
  <section class="panel-19041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19041");
const base = ref(19041);
const total = computed(() => base.value * 2);

function incrementar19041() {
  base.value++;
}
</script>
