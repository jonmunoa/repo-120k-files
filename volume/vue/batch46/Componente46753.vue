<template>
  <section class="panel-46753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46753");
const base = ref(46753);
const total = computed(() => base.value * 2);

function incrementar46753() {
  base.value++;
}
</script>
