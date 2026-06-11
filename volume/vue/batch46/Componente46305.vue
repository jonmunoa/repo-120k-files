<template>
  <section class="panel-46305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46305");
const base = ref(46305);
const total = computed(() => base.value * 2);

function incrementar46305() {
  base.value++;
}
</script>
