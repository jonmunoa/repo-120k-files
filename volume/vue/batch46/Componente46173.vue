<template>
  <section class="panel-46173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46173");
const base = ref(46173);
const total = computed(() => base.value * 2);

function incrementar46173() {
  base.value++;
}
</script>
