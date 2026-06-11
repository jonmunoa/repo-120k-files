<template>
  <section class="panel-46641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46641");
const base = ref(46641);
const total = computed(() => base.value * 2);

function incrementar46641() {
  base.value++;
}
</script>
