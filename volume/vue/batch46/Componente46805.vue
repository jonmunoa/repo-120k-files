<template>
  <section class="panel-46805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46805");
const base = ref(46805);
const total = computed(() => base.value * 2);

function incrementar46805() {
  base.value++;
}
</script>
