<template>
  <section class="panel-7381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7381");
const base = ref(7381);
const total = computed(() => base.value * 2);

function incrementar7381() {
  base.value++;
}
</script>
