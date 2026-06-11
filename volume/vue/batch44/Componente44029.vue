<template>
  <section class="panel-44029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44029");
const base = ref(44029);
const total = computed(() => base.value * 2);

function incrementar44029() {
  base.value++;
}
</script>
