<template>
  <section class="panel-46989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46989");
const base = ref(46989);
const total = computed(() => base.value * 2);

function incrementar46989() {
  base.value++;
}
</script>
