<template>
  <section class="panel-45197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45197");
const base = ref(45197);
const total = computed(() => base.value * 2);

function incrementar45197() {
  base.value++;
}
</script>
