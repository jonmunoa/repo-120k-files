<template>
  <section class="panel-46269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46269");
const base = ref(46269);
const total = computed(() => base.value * 2);

function incrementar46269() {
  base.value++;
}
</script>
