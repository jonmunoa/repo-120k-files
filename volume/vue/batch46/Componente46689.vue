<template>
  <section class="panel-46689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46689");
const base = ref(46689);
const total = computed(() => base.value * 2);

function incrementar46689() {
  base.value++;
}
</script>
