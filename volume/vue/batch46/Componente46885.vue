<template>
  <section class="panel-46885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46885");
const base = ref(46885);
const total = computed(() => base.value * 2);

function incrementar46885() {
  base.value++;
}
</script>
