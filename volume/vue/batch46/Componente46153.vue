<template>
  <section class="panel-46153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46153");
const base = ref(46153);
const total = computed(() => base.value * 2);

function incrementar46153() {
  base.value++;
}
</script>
