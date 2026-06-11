<template>
  <section class="panel-46713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46713");
const base = ref(46713);
const total = computed(() => base.value * 2);

function incrementar46713() {
  base.value++;
}
</script>
