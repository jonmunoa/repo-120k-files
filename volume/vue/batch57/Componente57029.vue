<template>
  <section class="panel-57029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57029");
const base = ref(57029);
const total = computed(() => base.value * 2);

function incrementar57029() {
  base.value++;
}
</script>
