<template>
  <section class="panel-46829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46829");
const base = ref(46829);
const total = computed(() => base.value * 2);

function incrementar46829() {
  base.value++;
}
</script>
