<template>
  <section class="panel-52413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52413");
const base = ref(52413);
const total = computed(() => base.value * 2);

function incrementar52413() {
  base.value++;
}
</script>
