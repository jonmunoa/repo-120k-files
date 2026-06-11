<template>
  <section class="panel-46649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46649");
const base = ref(46649);
const total = computed(() => base.value * 2);

function incrementar46649() {
  base.value++;
}
</script>
