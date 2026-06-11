<template>
  <section class="panel-31085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31085");
const base = ref(31085);
const total = computed(() => base.value * 2);

function incrementar31085() {
  base.value++;
}
</script>
