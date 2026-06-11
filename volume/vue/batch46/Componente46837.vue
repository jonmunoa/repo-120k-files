<template>
  <section class="panel-46837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46837");
const base = ref(46837);
const total = computed(() => base.value * 2);

function incrementar46837() {
  base.value++;
}
</script>
