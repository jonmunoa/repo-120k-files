<template>
  <section class="panel-1993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1993");
const base = ref(1993);
const total = computed(() => base.value * 2);

function incrementar1993() {
  base.value++;
}
</script>
