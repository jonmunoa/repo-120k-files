<template>
  <section class="panel-46169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46169");
const base = ref(46169);
const total = computed(() => base.value * 2);

function incrementar46169() {
  base.value++;
}
</script>
