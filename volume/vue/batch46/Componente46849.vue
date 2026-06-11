<template>
  <section class="panel-46849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46849");
const base = ref(46849);
const total = computed(() => base.value * 2);

function incrementar46849() {
  base.value++;
}
</script>
