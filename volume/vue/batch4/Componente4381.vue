<template>
  <section class="panel-4381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4381");
const base = ref(4381);
const total = computed(() => base.value * 2);

function incrementar4381() {
  base.value++;
}
</script>
