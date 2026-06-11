<template>
  <section class="panel-17041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17041");
const base = ref(17041);
const total = computed(() => base.value * 2);

function incrementar17041() {
  base.value++;
}
</script>
