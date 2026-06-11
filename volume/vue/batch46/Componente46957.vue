<template>
  <section class="panel-46957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46957");
const base = ref(46957);
const total = computed(() => base.value * 2);

function incrementar46957() {
  base.value++;
}
</script>
