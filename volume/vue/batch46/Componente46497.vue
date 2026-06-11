<template>
  <section class="panel-46497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46497");
const base = ref(46497);
const total = computed(() => base.value * 2);

function incrementar46497() {
  base.value++;
}
</script>
