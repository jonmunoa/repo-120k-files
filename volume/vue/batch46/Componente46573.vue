<template>
  <section class="panel-46573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46573");
const base = ref(46573);
const total = computed(() => base.value * 2);

function incrementar46573() {
  base.value++;
}
</script>
