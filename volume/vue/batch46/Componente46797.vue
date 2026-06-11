<template>
  <section class="panel-46797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46797");
const base = ref(46797);
const total = computed(() => base.value * 2);

function incrementar46797() {
  base.value++;
}
</script>
