<template>
  <section class="panel-28041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28041");
const base = ref(28041);
const total = computed(() => base.value * 2);

function incrementar28041() {
  base.value++;
}
</script>
