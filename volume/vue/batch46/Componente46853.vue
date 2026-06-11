<template>
  <section class="panel-46853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46853");
const base = ref(46853);
const total = computed(() => base.value * 2);

function incrementar46853() {
  base.value++;
}
</script>
