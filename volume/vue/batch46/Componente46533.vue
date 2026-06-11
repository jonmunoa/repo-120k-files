<template>
  <section class="panel-46533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46533");
const base = ref(46533);
const total = computed(() => base.value * 2);

function incrementar46533() {
  base.value++;
}
</script>
