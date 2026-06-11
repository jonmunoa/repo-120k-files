<template>
  <section class="panel-51413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51413");
const base = ref(51413);
const total = computed(() => base.value * 2);

function incrementar51413() {
  base.value++;
}
</script>
