<template>
  <section class="panel-47525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47525");
const base = ref(47525);
const total = computed(() => base.value * 2);

function incrementar47525() {
  base.value++;
}
</script>
