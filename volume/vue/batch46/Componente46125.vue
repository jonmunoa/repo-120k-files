<template>
  <section class="panel-46125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46125");
const base = ref(46125);
const total = computed(() => base.value * 2);

function incrementar46125() {
  base.value++;
}
</script>
