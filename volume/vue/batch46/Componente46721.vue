<template>
  <section class="panel-46721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46721");
const base = ref(46721);
const total = computed(() => base.value * 2);

function incrementar46721() {
  base.value++;
}
</script>
