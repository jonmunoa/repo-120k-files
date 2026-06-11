<template>
  <section class="panel-46733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46733");
const base = ref(46733);
const total = computed(() => base.value * 2);

function incrementar46733() {
  base.value++;
}
</script>
