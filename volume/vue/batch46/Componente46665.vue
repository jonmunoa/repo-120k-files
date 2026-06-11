<template>
  <section class="panel-46665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46665");
const base = ref(46665);
const total = computed(() => base.value * 2);

function incrementar46665() {
  base.value++;
}
</script>
