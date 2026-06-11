<template>
  <section class="panel-46217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46217");
const base = ref(46217);
const total = computed(() => base.value * 2);

function incrementar46217() {
  base.value++;
}
</script>
