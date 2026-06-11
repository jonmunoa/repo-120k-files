<template>
  <section class="panel-46033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46033");
const base = ref(46033);
const total = computed(() => base.value * 2);

function incrementar46033() {
  base.value++;
}
</script>
