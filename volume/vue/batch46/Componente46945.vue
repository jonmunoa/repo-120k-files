<template>
  <section class="panel-46945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46945");
const base = ref(46945);
const total = computed(() => base.value * 2);

function incrementar46945() {
  base.value++;
}
</script>
