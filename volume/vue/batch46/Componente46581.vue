<template>
  <section class="panel-46581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46581");
const base = ref(46581);
const total = computed(() => base.value * 2);

function incrementar46581() {
  base.value++;
}
</script>
