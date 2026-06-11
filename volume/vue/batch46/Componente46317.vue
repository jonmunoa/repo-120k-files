<template>
  <section class="panel-46317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46317");
const base = ref(46317);
const total = computed(() => base.value * 2);

function incrementar46317() {
  base.value++;
}
</script>
