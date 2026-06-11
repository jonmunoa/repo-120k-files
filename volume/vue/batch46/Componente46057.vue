<template>
  <section class="panel-46057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46057");
const base = ref(46057);
const total = computed(() => base.value * 2);

function incrementar46057() {
  base.value++;
}
</script>
