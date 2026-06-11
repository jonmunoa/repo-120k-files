<template>
  <section class="panel-10301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10301");
const base = ref(10301);
const total = computed(() => base.value * 2);

function incrementar10301() {
  base.value++;
}
</script>
