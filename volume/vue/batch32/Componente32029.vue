<template>
  <section class="panel-32029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32029");
const base = ref(32029);
const total = computed(() => base.value * 2);

function incrementar32029() {
  base.value++;
}
</script>
