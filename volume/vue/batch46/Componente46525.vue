<template>
  <section class="panel-46525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46525");
const base = ref(46525);
const total = computed(() => base.value * 2);

function incrementar46525() {
  base.value++;
}
</script>
