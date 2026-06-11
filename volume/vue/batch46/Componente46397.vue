<template>
  <section class="panel-46397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46397");
const base = ref(46397);
const total = computed(() => base.value * 2);

function incrementar46397() {
  base.value++;
}
</script>
