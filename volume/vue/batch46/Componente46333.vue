<template>
  <section class="panel-46333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46333");
const base = ref(46333);
const total = computed(() => base.value * 2);

function incrementar46333() {
  base.value++;
}
</script>
