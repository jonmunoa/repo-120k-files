<template>
  <section class="panel-46213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46213");
const base = ref(46213);
const total = computed(() => base.value * 2);

function incrementar46213() {
  base.value++;
}
</script>
