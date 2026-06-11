<template>
  <section class="panel-46541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46541");
const base = ref(46541);
const total = computed(() => base.value * 2);

function incrementar46541() {
  base.value++;
}
</script>
