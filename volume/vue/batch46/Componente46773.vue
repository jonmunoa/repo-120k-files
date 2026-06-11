<template>
  <section class="panel-46773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46773");
const base = ref(46773);
const total = computed(() => base.value * 2);

function incrementar46773() {
  base.value++;
}
</script>
