<template>
  <section class="panel-5041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5041");
const base = ref(5041);
const total = computed(() => base.value * 2);

function incrementar5041() {
  base.value++;
}
</script>
