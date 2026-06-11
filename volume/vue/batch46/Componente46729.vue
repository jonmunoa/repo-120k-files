<template>
  <section class="panel-46729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46729");
const base = ref(46729);
const total = computed(() => base.value * 2);

function incrementar46729() {
  base.value++;
}
</script>
