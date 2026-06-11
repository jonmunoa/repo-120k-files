<template>
  <section class="panel-29229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29229");
const base = ref(29229);
const total = computed(() => base.value * 2);

function incrementar29229() {
  base.value++;
}
</script>
