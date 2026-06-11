<template>
  <section class="panel-46701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46701");
const base = ref(46701);
const total = computed(() => base.value * 2);

function incrementar46701() {
  base.value++;
}
</script>
