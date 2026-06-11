<template>
  <section class="panel-46049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46049");
const base = ref(46049);
const total = computed(() => base.value * 2);

function incrementar46049() {
  base.value++;
}
</script>
