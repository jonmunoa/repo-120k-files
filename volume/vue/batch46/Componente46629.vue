<template>
  <section class="panel-46629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46629");
const base = ref(46629);
const total = computed(() => base.value * 2);

function incrementar46629() {
  base.value++;
}
</script>
