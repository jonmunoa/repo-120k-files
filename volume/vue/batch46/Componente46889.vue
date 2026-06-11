<template>
  <section class="panel-46889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46889");
const base = ref(46889);
const total = computed(() => base.value * 2);

function incrementar46889() {
  base.value++;
}
</script>
