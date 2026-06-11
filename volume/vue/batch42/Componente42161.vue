<template>
  <section class="panel-42161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42161");
const base = ref(42161);
const total = computed(() => base.value * 2);

function incrementar42161() {
  base.value++;
}
</script>
