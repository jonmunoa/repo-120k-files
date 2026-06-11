<template>
  <section class="panel-46549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46549");
const base = ref(46549);
const total = computed(() => base.value * 2);

function incrementar46549() {
  base.value++;
}
</script>
