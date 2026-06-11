<template>
  <section class="panel-6233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6233");
const base = ref(6233);
const total = computed(() => base.value * 2);

function incrementar6233() {
  base.value++;
}
</script>
