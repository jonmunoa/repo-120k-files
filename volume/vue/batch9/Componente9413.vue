<template>
  <section class="panel-9413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9413");
const base = ref(9413);
const total = computed(() => base.value * 2);

function incrementar9413() {
  base.value++;
}
</script>
