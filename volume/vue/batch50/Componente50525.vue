<template>
  <section class="panel-50525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50525");
const base = ref(50525);
const total = computed(() => base.value * 2);

function incrementar50525() {
  base.value++;
}
</script>
