<template>
  <section class="panel-46369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46369");
const base = ref(46369);
const total = computed(() => base.value * 2);

function incrementar46369() {
  base.value++;
}
</script>
