<template>
  <section class="panel-31397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31397");
const base = ref(31397);
const total = computed(() => base.value * 2);

function incrementar31397() {
  base.value++;
}
</script>
