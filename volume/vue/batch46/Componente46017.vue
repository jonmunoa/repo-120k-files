<template>
  <section class="panel-46017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46017");
const base = ref(46017);
const total = computed(() => base.value * 2);

function incrementar46017() {
  base.value++;
}
</script>
