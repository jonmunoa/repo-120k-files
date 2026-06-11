<template>
  <section class="panel-46165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46165");
const base = ref(46165);
const total = computed(() => base.value * 2);

function incrementar46165() {
  base.value++;
}
</script>
