<template>
  <section class="panel-46973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46973");
const base = ref(46973);
const total = computed(() => base.value * 2);

function incrementar46973() {
  base.value++;
}
</script>
