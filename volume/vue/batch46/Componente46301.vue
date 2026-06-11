<template>
  <section class="panel-46301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46301");
const base = ref(46301);
const total = computed(() => base.value * 2);

function incrementar46301() {
  base.value++;
}
</script>
