<template>
  <section class="panel-46801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46801");
const base = ref(46801);
const total = computed(() => base.value * 2);

function incrementar46801() {
  base.value++;
}
</script>
