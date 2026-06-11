<template>
  <section class="panel-46289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46289");
const base = ref(46289);
const total = computed(() => base.value * 2);

function incrementar46289() {
  base.value++;
}
</script>
