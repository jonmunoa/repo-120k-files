<template>
  <section class="panel-46517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46517");
const base = ref(46517);
const total = computed(() => base.value * 2);

function incrementar46517() {
  base.value++;
}
</script>
