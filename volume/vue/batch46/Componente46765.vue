<template>
  <section class="panel-46765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46765");
const base = ref(46765);
const total = computed(() => base.value * 2);

function incrementar46765() {
  base.value++;
}
</script>
