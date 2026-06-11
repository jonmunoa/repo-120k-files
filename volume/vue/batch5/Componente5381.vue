<template>
  <section class="panel-5381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5381");
const base = ref(5381);
const total = computed(() => base.value * 2);

function incrementar5381() {
  base.value++;
}
</script>
