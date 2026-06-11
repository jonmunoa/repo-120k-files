<template>
  <section class="panel-52041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52041");
const base = ref(52041);
const total = computed(() => base.value * 2);

function incrementar52041() {
  base.value++;
}
</script>
