<template>
  <section class="panel-42645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42645");
const base = ref(42645);
const total = computed(() => base.value * 2);

function incrementar42645() {
  base.value++;
}
</script>
