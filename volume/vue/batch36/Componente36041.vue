<template>
  <section class="panel-36041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36041");
const base = ref(36041);
const total = computed(() => base.value * 2);

function incrementar36041() {
  base.value++;
}
</script>
