<template>
  <section class="panel-3945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3945");
const base = ref(3945);
const total = computed(() => base.value * 2);

function incrementar3945() {
  base.value++;
}
</script>
