<template>
  <section class="panel-53701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53701");
const base = ref(53701);
const total = computed(() => base.value * 2);

function incrementar53701() {
  base.value++;
}
</script>
