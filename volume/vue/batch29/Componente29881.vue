<template>
  <section class="panel-29881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29881");
const base = ref(29881);
const total = computed(() => base.value * 2);

function incrementar29881() {
  base.value++;
}
</script>
