<template>
  <section class="panel-46913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46913");
const base = ref(46913);
const total = computed(() => base.value * 2);

function incrementar46913() {
  base.value++;
}
</script>
