<template>
  <section class="panel-46877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46877");
const base = ref(46877);
const total = computed(() => base.value * 2);

function incrementar46877() {
  base.value++;
}
</script>
