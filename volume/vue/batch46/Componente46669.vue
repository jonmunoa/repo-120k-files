<template>
  <section class="panel-46669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46669");
const base = ref(46669);
const total = computed(() => base.value * 2);

function incrementar46669() {
  base.value++;
}
</script>
