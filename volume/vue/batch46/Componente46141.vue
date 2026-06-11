<template>
  <section class="panel-46141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46141");
const base = ref(46141);
const total = computed(() => base.value * 2);

function incrementar46141() {
  base.value++;
}
</script>
