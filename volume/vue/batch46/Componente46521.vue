<template>
  <section class="panel-46521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46521");
const base = ref(46521);
const total = computed(() => base.value * 2);

function incrementar46521() {
  base.value++;
}
</script>
