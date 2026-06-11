<template>
  <section class="panel-46817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46817");
const base = ref(46817);
const total = computed(() => base.value * 2);

function incrementar46817() {
  base.value++;
}
</script>
