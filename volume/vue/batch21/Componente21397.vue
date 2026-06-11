<template>
  <section class="panel-21397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21397");
const base = ref(21397);
const total = computed(() => base.value * 2);

function incrementar21397() {
  base.value++;
}
</script>
