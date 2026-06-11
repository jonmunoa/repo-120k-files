<template>
  <section class="panel-46825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46825");
const base = ref(46825);
const total = computed(() => base.value * 2);

function incrementar46825() {
  base.value++;
}
</script>
