<template>
  <section class="panel-42241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42241");
const base = ref(42241);
const total = computed(() => base.value * 2);

function incrementar42241() {
  base.value++;
}
</script>
