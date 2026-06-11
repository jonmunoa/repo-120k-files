<template>
  <section class="panel-46361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46361");
const base = ref(46361);
const total = computed(() => base.value * 2);

function incrementar46361() {
  base.value++;
}
</script>
