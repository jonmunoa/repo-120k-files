<template>
  <section class="panel-46345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46345");
const base = ref(46345);
const total = computed(() => base.value * 2);

function incrementar46345() {
  base.value++;
}
</script>
