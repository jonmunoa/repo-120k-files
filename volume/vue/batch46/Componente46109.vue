<template>
  <section class="panel-46109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46109");
const base = ref(46109);
const total = computed(() => base.value * 2);

function incrementar46109() {
  base.value++;
}
</script>
