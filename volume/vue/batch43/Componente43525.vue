<template>
  <section class="panel-43525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43525");
const base = ref(43525);
const total = computed(() => base.value * 2);

function incrementar43525() {
  base.value++;
}
</script>
