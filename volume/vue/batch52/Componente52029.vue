<template>
  <section class="panel-52029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52029");
const base = ref(52029);
const total = computed(() => base.value * 2);

function incrementar52029() {
  base.value++;
}
</script>
