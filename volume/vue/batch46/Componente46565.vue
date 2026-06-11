<template>
  <section class="panel-46565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46565");
const base = ref(46565);
const total = computed(() => base.value * 2);

function incrementar46565() {
  base.value++;
}
</script>
