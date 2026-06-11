<template>
  <section class="panel-46473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46473");
const base = ref(46473);
const total = computed(() => base.value * 2);

function incrementar46473() {
  base.value++;
}
</script>
