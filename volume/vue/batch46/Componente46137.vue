<template>
  <section class="panel-46137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46137");
const base = ref(46137);
const total = computed(() => base.value * 2);

function incrementar46137() {
  base.value++;
}
</script>
