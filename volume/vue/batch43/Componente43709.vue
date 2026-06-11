<template>
  <section class="panel-43709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43709");
const base = ref(43709);
const total = computed(() => base.value * 2);

function incrementar43709() {
  base.value++;
}
</script>
