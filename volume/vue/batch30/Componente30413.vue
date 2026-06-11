<template>
  <section class="panel-30413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30413");
const base = ref(30413);
const total = computed(() => base.value * 2);

function incrementar30413() {
  base.value++;
}
</script>
