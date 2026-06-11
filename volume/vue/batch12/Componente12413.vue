<template>
  <section class="panel-12413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12413");
const base = ref(12413);
const total = computed(() => base.value * 2);

function incrementar12413() {
  base.value++;
}
</script>
