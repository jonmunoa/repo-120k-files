<template>
  <section class="panel-10093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10093");
const base = ref(10093);
const total = computed(() => base.value * 2);

function incrementar10093() {
  base.value++;
}
</script>
