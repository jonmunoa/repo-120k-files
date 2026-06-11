<template>
  <section class="panel-50677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50677");
const base = ref(50677);
const total = computed(() => base.value * 2);

function incrementar50677() {
  base.value++;
}
</script>
