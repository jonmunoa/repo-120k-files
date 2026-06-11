<template>
  <section class="panel-8085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8085");
const base = ref(8085);
const total = computed(() => base.value * 2);

function incrementar8085() {
  base.value++;
}
</script>
