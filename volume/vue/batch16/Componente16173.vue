<template>
  <section class="panel-16173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16173");
const base = ref(16173);
const total = computed(() => base.value * 2);

function incrementar16173() {
  base.value++;
}
</script>
