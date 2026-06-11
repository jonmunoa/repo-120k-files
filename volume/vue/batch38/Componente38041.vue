<template>
  <section class="panel-38041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38041");
const base = ref(38041);
const total = computed(() => base.value * 2);

function incrementar38041() {
  base.value++;
}
</script>
