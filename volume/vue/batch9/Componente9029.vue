<template>
  <section class="panel-9029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9029");
const base = ref(9029);
const total = computed(() => base.value * 2);

function incrementar9029() {
  base.value++;
}
</script>
