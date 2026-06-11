<template>
  <section class="panel-46881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46881");
const base = ref(46881);
const total = computed(() => base.value * 2);

function incrementar46881() {
  base.value++;
}
</script>
