<template>
  <section class="panel-9093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9093");
const base = ref(9093);
const total = computed(() => base.value * 2);

function incrementar9093() {
  base.value++;
}
</script>
