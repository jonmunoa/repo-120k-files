<template>
  <section class="panel-46189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46189");
const base = ref(46189);
const total = computed(() => base.value * 2);

function incrementar46189() {
  base.value++;
}
</script>
