<template>
  <section class="panel-46061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46061");
const base = ref(46061);
const total = computed(() => base.value * 2);

function incrementar46061() {
  base.value++;
}
</script>
