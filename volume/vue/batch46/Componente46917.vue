<template>
  <section class="panel-46917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46917");
const base = ref(46917);
const total = computed(() => base.value * 2);

function incrementar46917() {
  base.value++;
}
</script>
