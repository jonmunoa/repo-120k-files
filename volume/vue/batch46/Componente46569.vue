<template>
  <section class="panel-46569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46569");
const base = ref(46569);
const total = computed(() => base.value * 2);

function incrementar46569() {
  base.value++;
}
</script>
