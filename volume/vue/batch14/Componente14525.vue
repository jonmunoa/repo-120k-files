<template>
  <section class="panel-14525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14525");
const base = ref(14525);
const total = computed(() => base.value * 2);

function incrementar14525() {
  base.value++;
}
</script>
