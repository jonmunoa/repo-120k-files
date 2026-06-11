<template>
  <section class="panel-47381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47381");
const base = ref(47381);
const total = computed(() => base.value * 2);

function incrementar47381() {
  base.value++;
}
</script>
