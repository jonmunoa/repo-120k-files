<template>
  <section class="panel-46021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46021");
const base = ref(46021);
const total = computed(() => base.value * 2);

function incrementar46021() {
  base.value++;
}
</script>
