<template>
  <section class="panel-46981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46981");
const base = ref(46981);
const total = computed(() => base.value * 2);

function incrementar46981() {
  base.value++;
}
</script>
