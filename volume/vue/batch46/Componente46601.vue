<template>
  <section class="panel-46601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46601");
const base = ref(46601);
const total = computed(() => base.value * 2);

function incrementar46601() {
  base.value++;
}
</script>
