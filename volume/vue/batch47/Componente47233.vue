<template>
  <section class="panel-47233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47233");
const base = ref(47233);
const total = computed(() => base.value * 2);

function incrementar47233() {
  base.value++;
}
</script>
