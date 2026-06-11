<template>
  <section class="panel-4233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4233");
const base = ref(4233);
const total = computed(() => base.value * 2);

function incrementar4233() {
  base.value++;
}
</script>
