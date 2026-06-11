<template>
  <section class="panel-46933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46933");
const base = ref(46933);
const total = computed(() => base.value * 2);

function incrementar46933() {
  base.value++;
}
</script>
