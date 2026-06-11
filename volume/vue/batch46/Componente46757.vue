<template>
  <section class="panel-46757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46757");
const base = ref(46757);
const total = computed(() => base.value * 2);

function incrementar46757() {
  base.value++;
}
</script>
