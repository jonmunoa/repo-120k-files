<template>
  <section class="panel-46681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46681");
const base = ref(46681);
const total = computed(() => base.value * 2);

function incrementar46681() {
  base.value++;
}
</script>
