<template>
  <section class="panel-46277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46277");
const base = ref(46277);
const total = computed(() => base.value * 2);

function incrementar46277() {
  base.value++;
}
</script>
