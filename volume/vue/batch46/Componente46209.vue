<template>
  <section class="panel-46209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46209");
const base = ref(46209);
const total = computed(() => base.value * 2);

function incrementar46209() {
  base.value++;
}
</script>
