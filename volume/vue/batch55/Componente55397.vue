<template>
  <section class="panel-55397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55397");
const base = ref(55397);
const total = computed(() => base.value * 2);

function incrementar55397() {
  base.value++;
}
</script>
