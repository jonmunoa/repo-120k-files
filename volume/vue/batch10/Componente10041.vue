<template>
  <section class="panel-10041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10041");
const base = ref(10041);
const total = computed(() => base.value * 2);

function incrementar10041() {
  base.value++;
}
</script>
