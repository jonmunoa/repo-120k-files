<template>
  <section class="panel-11525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11525");
const base = ref(11525);
const total = computed(() => base.value * 2);

function incrementar11525() {
  base.value++;
}
</script>
