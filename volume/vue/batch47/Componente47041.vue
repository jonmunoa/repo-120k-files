<template>
  <section class="panel-47041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47041");
const base = ref(47041);
const total = computed(() => base.value * 2);

function incrementar47041() {
  base.value++;
}
</script>
