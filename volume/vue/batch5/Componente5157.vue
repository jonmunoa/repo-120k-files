<template>
  <section class="panel-5157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5157");
const base = ref(5157);
const total = computed(() => base.value * 2);

function incrementar5157() {
  base.value++;
}
</script>
