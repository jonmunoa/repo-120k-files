<template>
  <section class="panel-413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 413");
const base = ref(413);
const total = computed(() => base.value * 2);

function incrementar413() {
  base.value++;
}
</script>
