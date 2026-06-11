<template>
  <section class="panel-46341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46341");
const base = ref(46341);
const total = computed(() => base.value * 2);

function incrementar46341() {
  base.value++;
}
</script>
