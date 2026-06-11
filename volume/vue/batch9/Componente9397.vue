<template>
  <section class="panel-9397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9397");
const base = ref(9397);
const total = computed(() => base.value * 2);

function incrementar9397() {
  base.value++;
}
</script>
