<template>
  <section class="panel-3217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3217");
const base = ref(3217);
const total = computed(() => base.value * 2);

function incrementar3217() {
  base.value++;
}
</script>
