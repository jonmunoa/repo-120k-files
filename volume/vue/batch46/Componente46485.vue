<template>
  <section class="panel-46485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46485");
const base = ref(46485);
const total = computed(() => base.value * 2);

function incrementar46485() {
  base.value++;
}
</script>
