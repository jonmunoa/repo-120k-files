<template>
  <section class="panel-46545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46545");
const base = ref(46545);
const total = computed(() => base.value * 2);

function incrementar46545() {
  base.value++;
}
</script>
