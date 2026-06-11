<template>
  <section class="panel-46393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46393");
const base = ref(46393);
const total = computed(() => base.value * 2);

function incrementar46393() {
  base.value++;
}
</script>
