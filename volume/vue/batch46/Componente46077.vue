<template>
  <section class="panel-46077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46077");
const base = ref(46077);
const total = computed(() => base.value * 2);

function incrementar46077() {
  base.value++;
}
</script>
