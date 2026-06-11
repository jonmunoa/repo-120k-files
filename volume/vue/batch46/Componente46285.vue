<template>
  <section class="panel-46285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46285");
const base = ref(46285);
const total = computed(() => base.value * 2);

function incrementar46285() {
  base.value++;
}
</script>
