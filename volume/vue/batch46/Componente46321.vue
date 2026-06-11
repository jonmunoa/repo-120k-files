<template>
  <section class="panel-46321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46321");
const base = ref(46321);
const total = computed(() => base.value * 2);

function incrementar46321() {
  base.value++;
}
</script>
