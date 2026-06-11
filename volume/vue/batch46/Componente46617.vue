<template>
  <section class="panel-46617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46617");
const base = ref(46617);
const total = computed(() => base.value * 2);

function incrementar46617() {
  base.value++;
}
</script>
