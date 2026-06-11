<template>
  <section class="panel-35525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35525");
const base = ref(35525);
const total = computed(() => base.value * 2);

function incrementar35525() {
  base.value++;
}
</script>
