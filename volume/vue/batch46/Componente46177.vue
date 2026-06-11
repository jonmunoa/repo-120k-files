<template>
  <section class="panel-46177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46177");
const base = ref(46177);
const total = computed(() => base.value * 2);

function incrementar46177() {
  base.value++;
}
</script>
