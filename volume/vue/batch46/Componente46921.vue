<template>
  <section class="panel-46921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46921");
const base = ref(46921);
const total = computed(() => base.value * 2);

function incrementar46921() {
  base.value++;
}
</script>
