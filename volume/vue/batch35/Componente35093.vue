<template>
  <section class="panel-35093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35093");
const base = ref(35093);
const total = computed(() => base.value * 2);

function incrementar35093() {
  base.value++;
}
</script>
