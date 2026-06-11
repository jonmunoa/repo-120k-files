<template>
  <section class="panel-42677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42677");
const base = ref(42677);
const total = computed(() => base.value * 2);

function incrementar42677() {
  base.value++;
}
</script>
