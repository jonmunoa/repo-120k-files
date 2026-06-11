<template>
  <section class="panel-6525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6525");
const base = ref(6525);
const total = computed(() => base.value * 2);

function incrementar6525() {
  base.value++;
}
</script>
