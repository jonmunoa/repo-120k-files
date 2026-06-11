<template>
  <section class="panel-46093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46093");
const base = ref(46093);
const total = computed(() => base.value * 2);

function incrementar46093() {
  base.value++;
}
</script>
