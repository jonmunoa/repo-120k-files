<template>
  <section class="panel-42937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42937");
const base = ref(42937);
const total = computed(() => base.value * 2);

function incrementar42937() {
  base.value++;
}
</script>
