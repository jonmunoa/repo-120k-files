<template>
  <section class="panel-3413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3413");
const base = ref(3413);
const total = computed(() => base.value * 2);

function incrementar3413() {
  base.value++;
}
</script>
