<template>
  <section class="panel-46233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46233");
const base = ref(46233);
const total = computed(() => base.value * 2);

function incrementar46233() {
  base.value++;
}
</script>
