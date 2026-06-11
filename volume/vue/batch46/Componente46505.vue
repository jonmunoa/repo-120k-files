<template>
  <section class="panel-46505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46505");
const base = ref(46505);
const total = computed(() => base.value * 2);

function incrementar46505() {
  base.value++;
}
</script>
