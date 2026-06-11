<template>
  <section class="panel-46813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46813");
const base = ref(46813);
const total = computed(() => base.value * 2);

function incrementar46813() {
  base.value++;
}
</script>
