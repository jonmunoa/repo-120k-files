<template>
  <section class="panel-46901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46901");
const base = ref(46901);
const total = computed(() => base.value * 2);

function incrementar46901() {
  base.value++;
}
</script>
