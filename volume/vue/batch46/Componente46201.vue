<template>
  <section class="panel-46201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46201");
const base = ref(46201);
const total = computed(() => base.value * 2);

function incrementar46201() {
  base.value++;
}
</script>
