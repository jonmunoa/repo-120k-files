<template>
  <section class="panel-46429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46429");
const base = ref(46429);
const total = computed(() => base.value * 2);

function incrementar46429() {
  base.value++;
}
</script>
