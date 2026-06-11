<template>
  <section class="panel-4157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4157");
const base = ref(4157);
const total = computed(() => base.value * 2);

function incrementar4157() {
  base.value++;
}
</script>
