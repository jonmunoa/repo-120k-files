<template>
  <section class="panel-46309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46309");
const base = ref(46309);
const total = computed(() => base.value * 2);

function incrementar46309() {
  base.value++;
}
</script>
