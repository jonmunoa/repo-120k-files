<template>
  <section class="panel-42421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42421");
const base = ref(42421);
const total = computed(() => base.value * 2);

function incrementar42421() {
  base.value++;
}
</script>
