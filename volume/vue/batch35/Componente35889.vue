<template>
  <section class="panel-35889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35889");
const base = ref(35889);
const total = computed(() => base.value * 2);

function incrementar35889() {
  base.value++;
}
</script>
