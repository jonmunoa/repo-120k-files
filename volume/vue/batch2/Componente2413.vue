<template>
  <section class="panel-2413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2413");
const base = ref(2413);
const total = computed(() => base.value * 2);

function incrementar2413() {
  base.value++;
}
</script>
