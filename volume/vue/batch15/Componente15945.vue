<template>
  <section class="panel-15945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15945");
const base = ref(15945);
const total = computed(() => base.value * 2);

function incrementar15945() {
  base.value++;
}
</script>
