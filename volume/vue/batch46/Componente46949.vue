<template>
  <section class="panel-46949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46949");
const base = ref(46949);
const total = computed(() => base.value * 2);

function incrementar46949() {
  base.value++;
}
</script>
