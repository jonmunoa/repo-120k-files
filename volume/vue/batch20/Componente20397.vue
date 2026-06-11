<template>
  <section class="panel-20397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20397");
const base = ref(20397);
const total = computed(() => base.value * 2);

function incrementar20397() {
  base.value++;
}
</script>
