<template>
  <section class="panel-46481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46481");
const base = ref(46481);
const total = computed(() => base.value * 2);

function incrementar46481() {
  base.value++;
}
</script>
