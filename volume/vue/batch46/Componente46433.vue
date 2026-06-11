<template>
  <section class="panel-46433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46433");
const base = ref(46433);
const total = computed(() => base.value * 2);

function incrementar46433() {
  base.value++;
}
</script>
