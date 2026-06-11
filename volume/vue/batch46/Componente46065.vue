<template>
  <section class="panel-46065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46065");
const base = ref(46065);
const total = computed(() => base.value * 2);

function incrementar46065() {
  base.value++;
}
</script>
