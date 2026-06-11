<template>
  <section class="panel-46365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46365");
const base = ref(46365);
const total = computed(() => base.value * 2);

function incrementar46365() {
  base.value++;
}
</script>
