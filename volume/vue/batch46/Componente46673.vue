<template>
  <section class="panel-46673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46673");
const base = ref(46673);
const total = computed(() => base.value * 2);

function incrementar46673() {
  base.value++;
}
</script>
