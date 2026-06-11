<template>
  <section class="panel-46313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46313");
const base = ref(46313);
const total = computed(() => base.value * 2);

function incrementar46313() {
  base.value++;
}
</script>
