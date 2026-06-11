<template>
  <section class="panel-46113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46113");
const base = ref(46113);
const total = computed(() => base.value * 2);

function incrementar46113() {
  base.value++;
}
</script>
