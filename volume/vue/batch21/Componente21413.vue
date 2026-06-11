<template>
  <section class="panel-21413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21413");
const base = ref(21413);
const total = computed(() => base.value * 2);

function incrementar21413() {
  base.value++;
}
</script>
