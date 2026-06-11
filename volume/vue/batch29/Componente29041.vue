<template>
  <section class="panel-29041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29041");
const base = ref(29041);
const total = computed(() => base.value * 2);

function incrementar29041() {
  base.value++;
}
</script>
