<template>
  <section class="panel-46185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46185");
const base = ref(46185);
const total = computed(() => base.value * 2);

function incrementar46185() {
  base.value++;
}
</script>
