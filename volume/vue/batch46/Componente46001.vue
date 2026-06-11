<template>
  <section class="panel-46001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46001");
const base = ref(46001);
const total = computed(() => base.value * 2);

function incrementar46001() {
  base.value++;
}
</script>
