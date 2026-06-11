<template>
  <section class="panel-46197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46197");
const base = ref(46197);
const total = computed(() => base.value * 2);

function incrementar46197() {
  base.value++;
}
</script>
