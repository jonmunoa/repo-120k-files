<template>
  <section class="panel-46069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46069");
const base = ref(46069);
const total = computed(() => base.value * 2);

function incrementar46069() {
  base.value++;
}
</script>
