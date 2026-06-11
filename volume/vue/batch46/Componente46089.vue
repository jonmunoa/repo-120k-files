<template>
  <section class="panel-46089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46089");
const base = ref(46089);
const total = computed(() => base.value * 2);

function incrementar46089() {
  base.value++;
}
</script>
