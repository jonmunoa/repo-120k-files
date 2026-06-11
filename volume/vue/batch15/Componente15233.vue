<template>
  <section class="panel-15233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15233");
const base = ref(15233);
const total = computed(() => base.value * 2);

function incrementar15233() {
  base.value++;
}
</script>
