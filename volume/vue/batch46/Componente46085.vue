<template>
  <section class="panel-46085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46085");
const base = ref(46085);
const total = computed(() => base.value * 2);

function incrementar46085() {
  base.value++;
}
</script>
