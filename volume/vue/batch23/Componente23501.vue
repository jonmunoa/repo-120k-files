<template>
  <section class="panel-23501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23501");
const base = ref(23501);
const total = computed(() => base.value * 2);

function incrementar23501() {
  base.value++;
}
</script>
