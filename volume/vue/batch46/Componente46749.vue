<template>
  <section class="panel-46749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46749");
const base = ref(46749);
const total = computed(() => base.value * 2);

function incrementar46749() {
  base.value++;
}
</script>
