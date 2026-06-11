<template>
  <section class="panel-22041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22041");
const base = ref(22041);
const total = computed(() => base.value * 2);

function incrementar22041() {
  base.value++;
}
</script>
