<template>
  <section class="panel-34041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34041");
const base = ref(34041);
const total = computed(() => base.value * 2);

function incrementar34041() {
  base.value++;
}
</script>
