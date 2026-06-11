<template>
  <section class="panel-46461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46461");
const base = ref(46461);
const total = computed(() => base.value * 2);

function incrementar46461() {
  base.value++;
}
</script>
