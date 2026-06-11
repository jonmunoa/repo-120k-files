<template>
  <section class="panel-46605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46605");
const base = ref(46605);
const total = computed(() => base.value * 2);

function incrementar46605() {
  base.value++;
}
</script>
